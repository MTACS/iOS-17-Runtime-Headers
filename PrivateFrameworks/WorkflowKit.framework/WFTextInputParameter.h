
@interface WFTextInputParameter : WFParameter <WFModuleSummarySupporting, WFParameterDialogProvider> {
    bool  _autoPeriodsDisabled;
    NSString * _autocapitalizationType;
    NSString * _autocorrectionType;
    unsigned long long  _hintDisplayMode;
    NSString * _keyboardType;
    bool  _monospace;
    bool  _multiline;
    NSString * _prefix;
    bool  _processesIntoContentItems;
    bool  _secureTextEntry;
    bool  _smartDashesDisabled;
    bool  _smartQuotesDisabled;
    unsigned long long  _syntaxHighlightingType;
    NSString * _textAlignment;
    NSString * _textContentType;
    bool  _textReplacementDisabled;
}

@property (nonatomic, readonly) bool autoPeriodsDisabled;
@property (nonatomic, readonly) NSString *autocapitalizationType;
@property (nonatomic, readonly) NSString *autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultPlaceholder;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long hintDisplayMode;
@property (nonatomic, readonly) NSString *keyboardType;
@property (getter=isMonospace, nonatomic, readonly) bool monospace;
@property (getter=isMultiline, nonatomic, readonly) bool multiline;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic, readonly) bool processesIntoContentItems;
@property (nonatomic, readonly) NSString *returnKeyType;
@property (getter=isSecureTextEntry, nonatomic, readonly) bool secureTextEntry;
@property (nonatomic, readonly) bool smartDashesDisabled;
@property (nonatomic, readonly) bool smartQuotesDisabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long syntaxHighlightingType;
@property (nonatomic, readonly) NSString *textAlignment;
@property (nonatomic, readonly, copy) NSString *textContentType;
@property (nonatomic, readonly) bool textReplacementDisabled;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (bool)autoPeriodsDisabled;
- (id)autocapitalizationType;
- (id)autocorrectionType;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)createDialogTextFieldConfigurationWithDefaultState:(id)arg1;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (unsigned long long)hintDisplayMode;
- (id)hintForState:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (bool)isMonospace;
- (bool)isMultiline;
- (bool)isSecureTextEntry;
- (id)keyboardType;
- (id)parameterStateFromDialogResponse:(id)arg1;
- (id)prefix;
- (bool)processesIntoContentItems;
- (id)returnKeyType;
- (void)setLocalizedPlaceholder:(id)arg1;
- (void)setPrefix:(id)arg1;
- (bool)shouldAlignLabels;
- (Class)singleStateClass;
- (bool)smartDashesDisabled;
- (bool)smartQuotesDisabled;
- (unsigned long long)syntaxHighlightingType;
- (id)textAlignment;
- (id)textContentType;
- (bool)textReplacementDisabled;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)defaultPlaceholder;
- (id)defaultStateForNewArrayElement;
- (id)moduleSummarySlotForState:(id)arg1;

@end
