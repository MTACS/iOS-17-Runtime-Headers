
@interface CLTOptionParser : NSObject {
    NSArray * _additionalHelpLines;
    CLTOption * _defaultHelpOption;
    CLTOption * _defaultVersionOption;
    NSArray * _inputArguments;
    NSString * _introductionaryDescription;
    NSMutableArray * _options;
    NSArray * _remainingArguments;
    bool  _succeedWithUnkownFlags;
    bool  _succeedWithoutArguments;
    NSString * _toolName;
    NSString * _usageOptionsDescription;
    NSString * _versionString;
}

@property (nonatomic, retain) NSArray *additionalHelpLines;
@property (nonatomic, retain) CLTOption *defaultHelpOption;
@property (nonatomic, retain) CLTOption *defaultVersionOption;
@property (nonatomic, retain) NSArray *inputArguments;
@property (nonatomic, retain) NSString *introductionaryDescription;
@property (nonatomic, retain) NSMutableArray *options;
@property (nonatomic, retain) NSArray *remainingArguments;
@property (nonatomic) bool succeedWithUnkownFlags;
@property (nonatomic) bool succeedWithoutArguments;
@property (nonatomic, retain) NSString *toolName;
@property (nonatomic, retain) NSString *usageOptionsDescription;
@property (nonatomic, readonly) NSString *versionLine;
@property (nonatomic, retain) NSString *versionString;

- (void).cxx_destruct;
- (void)addOption:(id)arg1;
- (id)additionalHelpLines;
- (id)defaultHelpOption;
- (id)defaultVersionOption;
- (id)helpString;
- (id)init;
- (id)initWithArguments:(id)arg1;
- (id)inputArguments;
- (id)introductionaryDescription;
- (id)options;
- (id)parse;
- (int)parseWithSuccessHandler:(id /* block */)arg1;
- (id)remainingArguments;
- (void)removeAllOptions;
- (void)setAdditionalHelpLines:(id)arg1;
- (void)setDefaultHelpOption:(id)arg1;
- (void)setDefaultVersionOption:(id)arg1;
- (void)setInputArguments:(id)arg1;
- (void)setIntroductionaryDescription:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setRemainingArguments:(id)arg1;
- (void)setSucceedWithUnkownFlags:(bool)arg1;
- (void)setSucceedWithoutArguments:(bool)arg1;
- (void)setToolName:(id)arg1;
- (void)setUsageOptionsDescription:(id)arg1;
- (void)setVersionString:(id)arg1;
- (bool)succeedWithUnkownFlags;
- (bool)succeedWithoutArguments;
- (id)toolName;
- (id)usageLine;
- (id)usageOptionsDescription;
- (id)usageString;
- (id)versionLine;
- (id)versionString;

@end
