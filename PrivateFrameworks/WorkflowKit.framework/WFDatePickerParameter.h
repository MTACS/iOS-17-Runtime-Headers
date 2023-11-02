
@interface WFDatePickerParameter : WFParameter <WFModuleSummarySupporting, WFParameterDialogProvider> {
    NSString * _datePickerMode;
    NSDate * _maximumDate;
    NSDate * _minimumDate;
}

@property (nonatomic, copy) NSString *datePickerMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)datePickerMode;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (id)maximumDate;
- (id)minimumDate;
- (id)parameterStateFromDialogResponse:(id)arg1;
- (void)setDatePickerMode:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (id)dateFormatter;
+ (Class)moduleSummaryEditorClass;

- (id)moduleSummarySlotForState:(id)arg1;

@end
