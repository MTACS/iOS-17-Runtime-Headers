
@interface WFNumberFieldParameter : WFParameter <WFModuleSummarySupporting, WFParameterDialogProvider> {
    bool  _allowsDecimalNumbers;
    bool  _allowsNegativeNumbers;
    NSString * _textAlignment;
}

@property (nonatomic, readonly) bool allowsDecimalNumbers;
@property (nonatomic, readonly) bool allowsNegativeNumbers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textAlignment;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)defaultAllowsDecimalNumbers;
+ (bool)defaultAllowsNegativeNumbers;

- (void).cxx_destruct;
- (bool)allowsDecimalNumbers;
- (bool)allowsNegativeNumbers;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (id)parameterStateFromDialogResponse:(id)arg1;
- (bool)shouldAlignLabels;
- (Class)singleStateClass;
- (id)textAlignment;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)defaultStateForNewArrayElement;
- (id)moduleSummarySlotForState:(id)arg1;

@end
