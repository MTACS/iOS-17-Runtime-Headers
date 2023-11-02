
@interface _ATXScoreTypes : NSObject

+ (id)aggdStringForScoreInput:(unsigned long long)arg1;
+ (void)iterScoreInputsWithBlock:(id /* block */)arg1;
+ (unsigned long long)mappingForDayOfWeekDistributionSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2;
+ (unsigned long long)mappingForTimeOfDayDistributionSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2;
+ (unsigned long long)mappingForTopRankedCoarseGeoHashSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2;
+ (unsigned long long)mappingForTopRankedGeoHashSignalsWithResolution:(unsigned long long)arg1 withRank:(unsigned long long)arg2 forScoreInputCategory:(unsigned long long)arg3;
+ (unsigned long long)mappingForTopRankedSpecificGeoHashSignals:(unsigned long long)arg1 forScoreInputCategory:(unsigned long long)arg2;
+ (unsigned long long)mappingForTopRankedZoom7GeoHashSignals:(unsigned long long)arg1;
+ (unsigned long long)scoreInputForString:(id)arg1;
+ (id)scoreInputsToNames;
+ (id)stringForScoreInput:(unsigned long long)arg1;

@end
