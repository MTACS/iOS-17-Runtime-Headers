
@interface UAFInstrumentationProvider : NSObject

+ (id)_constructNamespaceStatusEventForNamespace:(unsigned int)arg1 withClient:(id)arg2;
+ (id)_constructSelfAssetSet:(id)arg1 storeManager:(id)arg2;
+ (int)_getAssetSource:(id)arg1;
+ (void)logAvailableAssetDailyStatus;
+ (id)logSubscriptionsStatus;
+ (void)logUAFAssetSetDailyStatus:(id)arg1 assetSetID:(id)arg2;

@end
