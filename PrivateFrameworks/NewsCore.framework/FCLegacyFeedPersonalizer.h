
@interface FCLegacyFeedPersonalizer : NSObject <FCFeedPersonalizing, FCPersonalizationFunctionProviding> {
    <FCFeedPersonalizing> * _feedPersonalizer;
    <FCPersonalizationFunctionProviding> * _functionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, readonly) <FCPersonalizationFunctionProviding> *functionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)decayedPublisherDiversificationPenalty;
- (id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2;
- (id)feedPersonalizer;
- (id)functionProvider;
- (id)init;
- (id)initWithFeedPersonalizer:(id)arg1 functionProvider:(id)arg2;
- (id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (id)limitItemsByMinimumItemQuality:(id)arg1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)arg1;
- (id)rankTagIDsDescending:(id)arg1;
- (id)scoresForTagIDs:(id)arg1;
- (id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;

@end
