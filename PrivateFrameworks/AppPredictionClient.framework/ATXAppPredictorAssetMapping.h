
@interface ATXAppPredictorAssetMapping : NSObject {
    NSDictionary * _consumerSubTypeAssetMappings;
}

+ (id)assetMappingWithCachedAssets;
+ (id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3;
+ (id)sharedInstanceWithMobileAssets;

- (void).cxx_destruct;
- (id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1;
- (id)getAtxToolDescription;
- (id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2;
- (id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)arg1;
- (id)init;
- (id)initWithUseMobileAssets:(bool)arg1;

@end
