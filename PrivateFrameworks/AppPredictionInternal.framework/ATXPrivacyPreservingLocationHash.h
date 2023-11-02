
@interface ATXPrivacyPreservingLocationHash : NSObject

+ (long long)dropLastTenBitsOfSHA256Hash:(long long)arg1;
+ (long long)geohashCollidesWithKnownLocationTypeForGeohash:(long long)arg1;
+ (long long)preservePrivacyForGeoHash:(long long)arg1;
+ (long long)privacyPreservingCoarseGeohashForLocation:(id)arg1 locationEnabled:(bool)arg2;
+ (long long)privacyPreservingGeohashForLocation:(id)arg1 locationEnabled:(bool)arg2;
+ (long long)privacyPreservingGeohashForLocation:(id)arg1 locationHashLevel:(int)arg2 locationEnabled:(bool)arg3;
+ (long long)privacyPreservingZoom7GeohashForLocation:(id)arg1 locationEnabled:(bool)arg2;
+ (id)randomData;
+ (id)readDeviceSpecificSalt;
+ (id)setSaltToUserDefaults:(id)arg1 scheme:(id)arg2;
+ (long long)sha256HashForGeohash:(long long)arg1 salt:(id)arg2;

@end
