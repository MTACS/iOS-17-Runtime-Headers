
@interface NSSUsageData : NSObject {
    NSArray * _appBundleUsage;
    unsigned long long  _availableStorageInBytes;
    unsigned long long  _capacityInBytes;
    NSArray * _categories;
    bool  _partiallyCharged;
    float  _standbyTimeInSeconds;
    bool  _trusted;
    float  _usageTimeInSeconds;
    unsigned long long  _usedStorageInBytes;
}

@property (nonatomic, readonly, retain) NSArray *appBundleUsage;
@property (nonatomic, readonly) unsigned long long availableStorageInBytes;
@property (nonatomic, readonly) unsigned long long capacityInBytes;
@property (nonatomic, readonly, retain) NSArray *categories;
@property (nonatomic, readonly) bool partiallyCharged;
@property (nonatomic, readonly) float standbyTimeInSeconds;
@property (nonatomic, readonly) bool trusted;
@property (nonatomic, readonly) float usageTimeInSeconds;
@property (nonatomic, readonly) unsigned long long usedStorageInBytes;

+ (id)createLegacyUsageDictionary:(id)arg1;
+ (id)createNSSUsageApp:(id)arg1;
+ (id)createNSSUsageBundle:(id)arg1;
+ (id)dedupeBundles:(id)arg1;
+ (id)newAppBundleFromAppBundleMsg:(id)arg1;
+ (id)newAppBundleFromAppUsageMsg:(id)arg1;
+ (id)newAppBundleFromBundleUsageMsg:(id)arg1;
+ (id)newAppBundleMsgFrom:(id)arg1;
+ (id)newMsgFromSize:(id)arg1;
+ (id)newSizeCategoryMsgFrom:(id)arg1;
+ (id)newSizeFromMsg:(id)arg1;
+ (id)newUsageDataFromUsageRespMsg:(id)arg1;
+ (id)newUsageRespMsgFrom:(id)arg1;
+ (id)setUsageRespMsgFrom:(id)arg1 usageRespMsg:(id)arg2;

- (void).cxx_destruct;
- (id)appBundleUsage;
- (unsigned long long)availableStorageInBytes;
- (unsigned long long)capacityInBytes;
- (id)categories;
- (id)initWithCapacity:(unsigned long long)arg1 usedStorageInBytes:(unsigned long long)arg2 available:(unsigned long long)arg3 usageTimeInSeconds:(float)arg4 standbyTimeInSeconds:(float)arg5 trusted:(bool)arg6 partiallyCharged:(bool)arg7 appBundleUsage:(id)arg8 categories:(id)arg9;
- (id)initWithUsed:(unsigned long long)arg1 available:(unsigned long long)arg2 usageTimeInSeconds:(float)arg3 standbyTimeInSeconds:(float)arg4 trusted:(bool)arg5 partiallyCharged:(bool)arg6 appBundleUsage:(id)arg7 categories:(id)arg8;
- (bool)partiallyCharged;
- (float)standbyTimeInSeconds;
- (bool)trusted;
- (float)usageTimeInSeconds;
- (unsigned long long)usedStorageInBytes;

@end
