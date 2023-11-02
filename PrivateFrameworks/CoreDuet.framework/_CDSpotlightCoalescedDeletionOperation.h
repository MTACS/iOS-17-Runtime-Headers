
@interface _CDSpotlightCoalescedDeletionOperation : NSObject {
    NSMutableDictionary * _bundleIdToDomainCompletionBlocks;
    NSMutableDictionary * _bundleIdToDomainIdentifiers;
    NSMutableDictionary * _bundleIdToItemCompletionBlocks;
    NSMutableDictionary * _bundleIdToItemIdentifiers;
    NSObject<OS_os_transaction> * _transaction;
}

- (void).cxx_destruct;
- (bool)addDeletion:(id)arg1;
- (id)description;
- (void)enumerateDeletionPredicatesAndCompletionsWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithBundleIdToIdentifiers:(id)arg1 bundleIdToCompletionBlocks:(id)arg2 bundleIdToDomainIdentifiers:(id)arg3 bundleIdToDomainCompletionBlocks:(id)arg4;

@end
