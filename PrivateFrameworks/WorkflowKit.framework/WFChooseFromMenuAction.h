
@interface WFChooseFromMenuAction : WFControlFlowAction <WFArrayParameterEventObserver, WFVariableDelegate> {
    <WFChooseFromMenuActionEventCoordinator> * _eventCoordinator;
    WFVariableString * _itemTitle;
    long long  _latestMenuChoice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <WFChooseFromMenuActionEventCoordinator> *eventCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) WFVariableString *itemTitle;
@property (nonatomic, readonly) long long latestMenuChoice;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (void)arrayParameter:(id)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)arrayParameter:(id)arg1 itemWasInserted:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)arrayParameter:(id)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)arrayParameter:(id)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(id)arg3;
- (id)createAccompanyingActions;
- (id)defaultOutputName;
- (id)eventCoordinator;
- (bool)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (void)initializeParameters;
- (bool)inputPassthrough;
- (bool)inputRequired;
- (id)inputSourceInWorkflow:(id)arg1;
- (id)intermediaryActions;
- (id)itemTitle;
- (long long)latestMenuChoice;
- (id)name;
- (id)newIntermediaryActionWithMenuItemTitle:(id)arg1;
- (unsigned long long)numberOfActionsIncludedWithAction:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)serializedParameters;
- (void)setEventCoordinator:(id)arg1;
- (void)setItemTitle:(id)arg1;
- (void)showAlertWithInput:(id)arg1;
- (void)variableDidChange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (id)attributedLocalizedName;

@end
