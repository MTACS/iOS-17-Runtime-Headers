
@interface PPSpotlightWritebackDissector : NSObject {
    PPLocalNamedEntityStore * _namedEntityStore;
    PPUniversalSearchSpotlightIndexScorer * _scorer;
    bool  _significanceCheckEnabled;
}

+ (bool)bundleIdIsAllowed:(id)arg1;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_getNamedEntityPortraitScores:(id)arg1 priorityQueue:(id)arg2;
- (bool)consumeContentFromBundleId:(id)arg1 extractions:(id)arg2 spotlightIdentifier:(id)arg3 fileProtectionType:(id)arg4 shouldContinueBlock:(id /* block */)arg5;
- (id)init;
- (id)initWithNamedEntityStore:(id)arg1 significanceCheckEnabled:(bool)arg2;

@end
