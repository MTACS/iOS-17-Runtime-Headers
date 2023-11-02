
@protocol TRIAutoAsset <NSObject>

@required

+ (id)new;

- (TRIFullMAAssetId *)assetId;
- (MAAutoAssetSelector *)assetSelector;
- (NSDictionary *)currentLocksSync:(id*)arg1;
- (MAAutoAssetSelector *)determineIfAvailableSync:(NSString *)arg1 withTimeout:(long long)arg2 discoveredAttributes:(id*)arg3 error:(id*)arg4;
- (NSError *)endLockUsageSync:(NSString *)arg1;
- (id)init;
- (id)initWithAssetId:(TRIFullMAAssetId *)arg1 decryptionKey:(NSData *)arg2 error:(id*)arg3;
- (void)lockContent:(void *)arg1 withUsagePolicy:(void *)arg2 withTimeout:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 13: NSString *, MAAutoAssetPolicy *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAAutoAssetSelector *, bool, NSURL *, MAAutoAssetStatus *, NSError *, void*
- (void)lockContent:(void *)arg1 withUsagePolicy:(void *)arg2 withTimeout:(void *)arg3 reportingProgress:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 20: NSString *, MAAutoAssetPolicy *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MAAutoAssetStatus *, NSError *, void*, id /* block */, void*, void, id /* block */, MAAutoAssetSelector *, bool, NSURL *, MAAutoAssetStatus *, NSError *, void*
- (NSURL *)lockContentSync:(NSString *)arg1 withUsagePolicy:(MAAutoAssetPolicy *)arg2 withTimeout:(long long)arg3 lockedAssetSelector:(id*)arg4 newerInProgress:(id*)arg5 error:(id*)arg6;
- (void)setAssetId:(TRIFullMAAssetId *)arg1;
- (void)setAssetSelector:(MAAutoAssetSelector *)arg1;

@end
