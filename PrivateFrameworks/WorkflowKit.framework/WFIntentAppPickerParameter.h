
@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter {
    NSString * _intentName;
}

@property (nonatomic, readonly) NSString *intentName;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (bool)alwaysShowsButton;
- (id)initWithDefinition:(id)arg1;
- (id)intentName;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

- (id)moduleSummarySlotsForState:(id)arg1;

@end
