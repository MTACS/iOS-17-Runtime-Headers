
@interface NMSMediaQuotaManager_Legacy : NSObject {
    NMSMediaDownloadInfo * _downloadInfoWithinQuota;
    NSDictionary * _groupIterators;
    bool  _hasEvaluated;
    unsigned long long  _quota;
    unsigned long long  _quotaUsage;
}

- (void).cxx_destruct;
- (id)_containerListForBundleIdentifier:(id)arg1;
- (void)_evaluateAddedItemsIfNecessary;
- (id)downloadInfoWithinQuota;
- (id)downloadInfoWithinQuotaForBundleIdentifier:(id)arg1;
- (id)groupIteratorForBundleIdentifier:(id)arg1;
- (id)initWithGroupIterators:(id)arg1 quota:(unsigned long long)arg2;
- (bool)isItemGroupWithinQuota:(id)arg1;
- (unsigned long long)sizeOfItemsWithinQuota;
- (unsigned long long)sizeOfItemsWithinQuotaForBundleIdentifier:(id)arg1;
- (unsigned long long)sizeOfNominatedItemsForBundleIdentifier:(id)arg1;

@end
