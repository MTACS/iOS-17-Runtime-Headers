
@interface LNKoaClient : NSObject <LNVocabularyDonator> {
    NSString * _bundleIdentifier;
    NSOrderedSet * _currentVocabularySet;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, retain) NSOrderedSet *currentVocabularySet;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)buildKVItemFrom:(id)arg1;
- (id)buildKVItemListWithIncrementalIDs:(id)arg1;
- (id)bundleIdentifier;
- (void)completeSuccessfully:(id /* block */)arg1;
- (void)completeWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)currentVocabularySet;
- (void)donateFullVocabularySet:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)getKVItemBuilderFor:(id)arg1 itemId:(id)arg2;
- (id)initForBundleIdentifier:(id)arg1;
- (id)queue;
- (void)setCurrentVocabularySet:(id)arg1;

@end
