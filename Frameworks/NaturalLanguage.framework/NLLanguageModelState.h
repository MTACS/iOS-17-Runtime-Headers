
@interface NLLanguageModelState : NSObject <NSCopying> {
    NSMutableString * _context;
    NSDictionary * _options;
    NLLanguageModelSession * _session;
}

@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NLLanguageModelSession *session;

- (void).cxx_destruct;
- (void)addContext:(id)arg1;
- (id)conditionalProbabilitiesForStrings:(id)arg1;
- (id)conditionalProbabilitiesForTokens:(id)arg1;
- (id)conditionalProbabilityForString:(id)arg1;
- (id)conditionalProbabilityForToken:(id)arg1;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumeratePredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (id)initWithSession:(id)arg1 options:(id)arg2 context:(id)arg3;
- (id)options;
- (void)resetContext;
- (id)session;

@end
