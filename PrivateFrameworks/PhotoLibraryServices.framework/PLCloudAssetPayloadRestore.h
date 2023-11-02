
@interface PLCloudAssetPayloadRestore : NSObject {
    unsigned long long  _batchSize;
    NSMutableArray * _batchToRestore;
    <PLCloudAssetPayloadRestoreDelegate> * _delegate;
    NSMutableDictionary * _payloadsForUnresolvedCloudIdentifiers;
    unsigned long long  _totalRestored;
    unsigned long long  _totalSkipped;
}

@property (nonatomic, readonly) unsigned long long batchSize;
@property (nonatomic, readonly) unsigned long long totalRestored;
@property (nonatomic, readonly) unsigned long long totalSkipped;

+ (id)assetForPayload:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsForAssetIdentifiersWithPayloads:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)relationshipKeyPathsForPrefetching;

- (void).cxx_destruct;
- (void)_insertBatchOfUnresolvedCloudIdentifiers;
- (void)_insertBatchToRestore;
- (void)_insertPayload:(id)arg1 forAsset:(id)arg2 skipMessage:(id)arg3;
- (id)_resolveCloudIdentifiersToLocalIdentifiers;
- (void)addPayload:(id)arg1;
- (unsigned long long)batchSize;
- (id)initWithDelegate:(id)arg1 batchSize:(unsigned long long)arg2;
- (void)insertRemainingPayloads;
- (unsigned long long)totalRestored;
- (unsigned long long)totalSkipped;

@end
