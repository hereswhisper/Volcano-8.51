#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function PanelButton.PanelButton_C.UpdateInputActionLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 RimBrush                                                         (Edit, BlueprintVisible)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// class UOverlaySlot*                K2Node_DynamicCast_AsOverlay_Slot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPanelButton_C::UpdateInputActionLayout(const struct FSlateBrush& RimBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("PanelButton_C", "UpdateInputActionLayout");

	Params::UPanelButton_C_UpdateInputActionLayout_Params Parms;

	Parms.RimBrush = RimBrush;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_DynamicCast_AsOverlay_Slot = K2Node_DynamicCast_AsOverlay_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.UpdateStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ActionText                                                       (Edit, BlueprintVisible)

void UPanelButton_C::UpdateStyle(bool bUsingGamepad, class FText ActionText)
{
	static auto Func = Class->GetFunction("PanelButton_C", "UpdateStyle");

	Params::UPanelButton_C_UpdateStyle_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;
	Parms.ActionText = ActionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPanelButton_C::InitializeButton()
{
	static auto Func = Class->GetFunction("PanelButton_C", "InitializeButton");

	Params::UPanelButton_C_InitializeButton_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPanelButton_C::UpdateTextAndStyle(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("PanelButton_C", "UpdateTextAndStyle");

	Params::UPanelButton_C_UpdateTextAndStyle_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPanelButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PanelButton_C", "PreConstruct");

	Params::UPanelButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPanelButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("PanelButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UPanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UPanelButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction)
{
	static auto Func = Class->GetFunction("PanelButton_C", "OnTriggeredInputActionChanged");

	Params::UPanelButton_C_OnTriggeredInputActionChanged_Params Parms;

	Parms.NewTriggeredAction = NewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HeldPercent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPanelButton_C::OnActionProgress(float HeldPercent)
{
	static auto Func = Class->GetFunction("PanelButton_C", "OnActionProgress");

	Params::UPanelButton_C_OnActionProgress_Params Parms;

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPanelButton_C::OnActionComplete()
{
	static auto Func = Class->GetFunction("PanelButton_C", "OnActionComplete");

	Params::UPanelButton_C_OnActionComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPanelButton_C::Construct()
{
	static auto Func = Class->GetFunction("PanelButton_C", "Construct");

	Params::UPanelButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPanelButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("PanelButton_C", "BP_OnHovered");

	Params::UPanelButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPanelButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("PanelButton_C", "BP_OnUnhovered");

	Params::UPanelButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_NewTriggeredAction                                  (ConstParm, NoDestructor)
// float                              K2Node_Event_HeldPercent                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPanelButton_C::ExecuteUbergraph_PanelButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_HasAnyChildren_ReturnValue, bool Temp_bool_Variable, bool K2Node_ComponentBoundEvent_bUsingGamepad, enum class ESlateVisibility K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent)
{
	static auto Func = Class->GetFunction("PanelButton_C", "ExecuteUbergraph_PanelButton");

	Params::UPanelButton_C_ExecuteUbergraph_PanelButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_NewTriggeredAction = K2Node_Event_NewTriggeredAction;
	Parms.K2Node_Event_HeldPercent = K2Node_Event_HeldPercent;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
