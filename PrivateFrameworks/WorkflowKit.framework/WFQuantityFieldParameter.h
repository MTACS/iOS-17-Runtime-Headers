
@interface WFQuantityFieldParameter : WFNumberFieldParameter {
    NSArray * _possibleUnits;
}

@property (nonatomic, readonly) NSString *moduleDefaultUnitString;
@property (nonatomic, copy) NSArray *possibleUnits;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)defaultAllowsDecimalNumbers;
+ (bool)defaultAllowsNegativeNumbers;

- (void).cxx_destruct;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)defaultSerializedRepresentation;
- (id)defaultUnit;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)arg1;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;
+ (id)unitSlotKey;

- (id)defaultStateForNewArrayElement;
- (id)moduleDefaultUnitString;
- (bool)moduleSummaryShowsAddButtonForState:(id)arg1;
- (id)moduleSummarySlotsForState:(id)arg1;

@end
