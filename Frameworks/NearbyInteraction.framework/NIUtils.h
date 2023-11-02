
@interface NIUtils : NSObject

+ (const char *)AntennaDiversityOverrideToString:(long long)arg1;
+ (const char *)NINearbyObjectUpdateRateToShortString:(long long)arg1;
+ (const char *)NINearbyObjectUpdateRateToString:(long long)arg1;
+ (const char *)NIRelationshipSpecifierToString:(unsigned long long)arg1;
+ (const char *)NISessionBackgroundModeToString:(long long)arg1;
+ (bool)isIntValidAntennaDiversityOverride:(long long)arg1;
+ (bool)isIntValidNearbyObjectUpdateRate:(long long)arg1;
+ (bool)isIntValidRelationshipSpecifier:(long long)arg1;
+ (bool)nearbyObjectUpdateRate:(long long)arg1 isGreaterThan:(long long)arg2;

@end
