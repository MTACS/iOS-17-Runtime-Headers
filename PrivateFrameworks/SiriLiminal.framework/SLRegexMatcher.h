
@interface SLRegexMatcher : NSObject <SLODLDPreProcessingComponent> {
    NSArray * _regexMatchingRules;
    NSArray * _replaceStrings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *regexMatchingRules;
@property (nonatomic, retain) NSArray *replaceStrings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_compileRegexRulesForPatterns:(id)arg1;
- (id)applyPreprocessingOnUtt:(id)arg1;
- (id)initWithConfigFile:(id)arg1;
- (id)regexMatchingRules;
- (id)replaceStrings;
- (void)setRegexMatchingRules:(id)arg1;
- (void)setReplaceStrings:(id)arg1;

@end
