
@interface CKVAppIdMapper : NSObject

+ (id)_buildKnownIdentifierToUniversalOriginAppIdMap;
+ (id)_getAllKnownAppIds;
+ (id)_getKnownAppIdMap;
+ (id)convertToUnversalAppId:(id)arg1;
+ (bool)isKnownAppId:(id)arg1;

@end
