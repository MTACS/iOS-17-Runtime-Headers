
@interface HFItemProviderUtilities : NSObject

+ (id)_legacyFavoriteServicesForHome:(id)arg1 withLimit:(unsigned long long)arg2;
+ (id)_servicesForHome:(id)arg1 canShowInControlCentre:(bool)arg2 withLimit:(unsigned long long)arg3 includes:(unsigned long long)arg4 ignoreUUIDs:(id)arg5;
+ (id)favoriteActionSetsForHome:(id)arg1 withLimit:(unsigned long long)arg2;
+ (id)favoriteServicesForHome:(id)arg1 withLimit:(unsigned long long)arg2;
+ (id)nonFavoriteServicesForHome:(id)arg1 withLimit:(unsigned long long)arg2;
+ (id)predictionsPaddingFavoriteServicesForHome:(id)arg1 withLimit:(unsigned long long)arg2;
+ (id)predictionsPaddingFavoriteServicesForHome:(id)arg1 withLimit:(unsigned long long)arg2 ignoreUUIDs:(id)arg3;
+ (id)predictionsPaddingNonFavoriteServicesForHome:(id)arg1 withLimit:(unsigned long long)arg2;
+ (id)predictionsPaddingNonFavoriteServicesForHome:(id)arg1 withLimit:(unsigned long long)arg2 ignoreUUIDs:(id)arg3;

@end
