
@interface DDSAnalytics : NSObject {
    NSMutableDictionary * _analyticByIdentifier;
    NSObject<OS_dispatch_queue> * _analyticQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *analyticByIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *analyticQueue;

+ (id)assetDownloadDurationBuckets;
+ (bool)isInteger:(id)arg1;
+ (id)roundNumber:(id)arg1 toSignificantDigits:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)analyticByIdentifier;
- (id)analyticQueue;
- (id)bucketForValue:(id)arg1 fromBuckets:(id)arg2;
- (void)cancelRecordingForAsset:(id)arg1;
- (void)dumpAssetLogWithAssertions:(id)arg1 installedAssets:(id)arg2;
- (id)init;
- (id)processName;
- (void)recordAssetAction:(int)arg1 forAsset:(id)arg2;
- (void)recordUpdateCycleState:(int)arg1;
- (void)reportAssetDownloadAnalytic:(id)arg1;
- (void)reportUpdateCycleAnalytic:(id)arg1;
- (id)stringForAction:(int)arg1;

@end
