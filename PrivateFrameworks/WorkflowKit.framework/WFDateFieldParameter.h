
@interface WFDateFieldParameter : WFTextInputParameter <WFParameterDialogProvider> {
    NSNumber * _dateFormatterDateStyleNumber;
    NSNumber * _dateFormatterRelativeDateFormattingNumber;
    NSString * _dateFormatterTemplateString;
    NSNumber * _dateFormatterTimeStyleNumber;
    bool  _detectsAllDayDates;
    bool  _displaysAllDayString;
    bool  _forcesAllDayDates;
    NSDateFormatter * _hintDateFormatter;
    NSString * _hintDateMode;
    NSString * _reactiveParameterKey;
    NSString * _resultType;
}

@property (nonatomic, readonly) NSNumber *dateFormatterDateStyleNumber;
@property (nonatomic, readonly) NSNumber *dateFormatterRelativeDateFormattingNumber;
@property (nonatomic, readonly, copy) NSString *dateFormatterTemplateString;
@property (nonatomic, readonly) NSNumber *dateFormatterTimeStyleNumber;
@property (nonatomic, readonly) bool dateOnlyMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultPlaceholder;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool detectsAllDayDates;
@property (nonatomic, readonly) bool displaysAllDayString;
@property (nonatomic) bool forcesAllDayDates;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateFormatter *hintDateFormatter;
@property (nonatomic, readonly) NSString *hintDateMode;
@property (nonatomic, readonly) NSString *localizedIncompleteHintString;
@property (nonatomic, readonly) NSString *reactiveParameterKey;
@property (nonatomic, readonly) NSString *resultType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timeOnlyMode;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void).cxx_destruct;
- (void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 prompt:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)createDialogTextFieldConfigurationWithDefaultState:(id)arg1;
- (id)dateFormatterDateStyleNumber;
- (id)dateFormatterForConfiguration:(id)arg1;
- (id)dateFormatterRelativeDateFormattingNumber;
- (id)dateFormatterTemplateString;
- (id)dateFormatterTimeStyleNumber;
- (bool)dateOnlyMode;
- (id)datePickerConfiguration;
- (bool)detectsAllDayDates;
- (bool)displaysAllDayString;
- (bool)forcesAllDayDates;
- (id)hintDateFormatter;
- (id)hintDateMode;
- (id)hintForState:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)localizedIncompleteHintString;
- (id)parameterStateFromDialogResponse:(id)arg1;
- (id)reactiveParameterKey;
- (id)resultType;
- (void)setForcesAllDayDates:(bool)arg1;
- (Class)singleStateClass;
- (bool)timeOnlyMode;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)moduleSummaryEditorClass;

- (id)defaultPlaceholder;

@end
