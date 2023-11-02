
@interface ATXFamilyCircleCache : NSObject

+ (id)cachedDefaultsKey;
+ (id)lastFetchDateDefaultsKey;

- (id)_fetchFamilyCircleWithUserDefaults:(id)arg1;
- (id)_requestUpdatedFamilyCircle;
- (id)fetchFamilyCircle;
- (bool)hasiCloudFamily;

@end
