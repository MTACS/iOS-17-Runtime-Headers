
@interface NMSMediaQuotaManager : NSObject {
    NMSMutableMediaDownloadInfo * _downloadInfoWithinQuota;
    NSDictionary * _downloadInfoWithinQuotaForIdentifiers;
    NSDictionary * _estimatedItemSizes;
    bool  _hasEvaluated;
    NSMutableDictionary * _itemEnumerators;
    bool  _legacy_musicDidSkipItem;
    unsigned long long  _quota;
}

- (void).cxx_destruct;
- (void)_evaluateAddedItemsIfNecessary;
- (bool)_legacy_musicDidSkipItem;
- (id)_newMutableItemEnumeratorDict;
- (id)downloadInfoWithinQuota;
- (id)downloadInfoWithinQuotaForBundleIdentifier:(id)arg1;
- (id)initWithItemEnumerators:(id)arg1 estimatedItemSizes:(id)arg2 quota:(unsigned long long)arg3;

@end
