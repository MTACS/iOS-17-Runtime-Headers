
@interface CDMContextualSpanMatcherService : CDMDAGBaseService {
    ContextualSpanMatcher * _contextualSpanMatcher;
    NSArray * _overrideSpansForReplay;
}

@property (nonatomic, retain) ContextualSpanMatcher *contextualSpanMatcher;
@property (nonatomic, readonly) NSArray *overrideSpansForReplay;

+ (bool)isAssetRequired;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)contextualSpanMatcher;
- (id)getContextualSpansInternal:(id)arg1;
- (id)getPredictor;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)overrideSpansForReplay;
- (void)setContextualSpanMatcher:(id)arg1;
- (id)setup:(id)arg1;

@end
