
@interface NMSSHConfig : NSObject {
    NSArray * _hostConfigs;
}

@property (nonatomic, retain) NSArray *hostConfigs;

+ (id)configFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)arrayFromString:(id)arg1;
- (id)blanksCharacterSet;
- (int)host:(id)arg1 matchesPatternList:(id)arg2;
- (bool)host:(id)arg1 matchesSubpattern:(id)arg2;
- (id)hostConfigForHost:(id)arg1;
- (id)hostConfigs;
- (id)initWithFile:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)parseHostNameWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseHostWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseIdentityFileWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseLine:(id)arg1 intoArray:(id)arg2;
- (void)parsePortWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseUserWithArguments:(id)arg1 intoArray:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInString:(id)arg1 fromLocationUntilBlankOrEnd:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfFirstTokenInString:(id)arg1 suffix:(id*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfQuotedSubstringInString:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (void)setHostConfigs:(id)arg1;

@end
