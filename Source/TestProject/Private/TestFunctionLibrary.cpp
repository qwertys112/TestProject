// Fill out your copyright notice in the Description page of Project Settings.


#include "TestFunctionLibrary.h"

FString UTestFunctionLibrary::StringConverter(FString Text)
{

	TArray<TCHAR> TextData;
	

	FString LowerText;

	FString ReturnText;

	LowerText = Text.ToLower();
	TextData = LowerText.GetCharArray();

	for (size_t i = 0; i < Text.Len(); i++)
	{
		TCHAR Value = TextData[i];

		int index = 0;

		for (size_t h = 0; h < TextData.Num(); h++)
		{
			if (TextData[h] == Value)
			{
				index += 1;
			}
		}


		if (index > 1)
		{

			ReturnText += ")";

		}
		else
		{

			ReturnText += "(";

		}

	};

	return ReturnText;

}

