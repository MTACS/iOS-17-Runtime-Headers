
@interface WiFiUsageAccessPointProfile : NSObject {
    NSString * _apProfile;
    NSString * _bssid;
}

@property (nonatomic, retain) NSString *apProfile;
@property (nonatomic, retain) NSString *bssid;

+ (void)_applyMask:(id)arg1 FromStart:(unsigned long long)arg2 WithLen:(unsigned long long)arg3 WithMask:(id)arg4 AppendTo:(id)arg5;
+ (id)_cachedProfile:(id)arg1;
+ (void)_cleanUpStaleProfiles;
+ (bool)_compareBytes:(id)arg1 FromStart:(unsigned long long)arg2 WithLen:(unsigned long long)arg3 With:(id)arg4;
+ (id)_config;
+ (void)_defaults;
+ (void)_endPrevAssoc;
+ (void)_extractFieldsFor:(id)arg1 From:(id)arg2 Into:(id)arg3;
+ (id)_getBinTimeInterval:(double)arg1 As:(unsigned long long)arg2;
+ (id)_getDefaults;
+ (bool)_isProfileValidForStorage:(id)arg1;
+ (bool)_isProfileValidForUse:(id)arg1 withCachedDict:(id)arg2;
+ (bool)_isProfileValidForUse:(id)arg1 withCachedDict:(id)arg2 onlyIfCurrent:(bool)arg3;
+ (id)_loadFromUserDefaults:(id)arg1 withKey:(id)arg2 withCachedData:(id)arg3;
+ (void)_saveToUserDefaults:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (void)_submitProfileFor:(id)arg1 withCachedDict:(id)arg2 AndEraseWithLog:(id)arg3;
+ (id)_toMobileAssetsProfile:(id)arg1;
+ (id)apNameForBSSID:(id)arg1;
+ (id)beaconsAndWPSInfo;
+ (void)initialize;
+ (id)longProfileForBSSID:(id)arg1;
+ (id)prefixForCA;
+ (id)profileForBSSID:(id)arg1;
+ (id)profileForBSSID:(id)arg1 onlyIfCurrent:(bool)arg2;
+ (id)profileFromBeaconData:(id)arg1 andParsedIE:(id)arg2;
+ (void)setMaxProfiles:(unsigned long long)arg1;
+ (id)shortProfileForBSSID:(id)arg1;
+ (void)updateConfig;
+ (void)updateWithAssocTime:(double)arg1 forBssid:(id)arg2;
+ (void)updateWithWPS:(id)arg1;

- (void).cxx_destruct;
- (id)apProfile;
- (id)bssid;
- (void)setApProfile:(id)arg1;
- (void)setBssid:(id)arg1;

@end
