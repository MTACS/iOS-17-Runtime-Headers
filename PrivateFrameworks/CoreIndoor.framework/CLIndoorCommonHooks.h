
@interface CLIndoorCommonHooks : NSObject

+ (id)filterLocationGroups:(id)arg1 isRegionalSupported:(bool)arg2;
+ (id)nearestVenues:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1 availableVenues:(id)arg2 latestPosition:(id)arg3 availabilityZScoreConfidenceInterval:(double)arg4 settings:(const struct NearestVenueSettings { id x1; double x2; id x3; bool x4; }*)arg5 isAllowedMultipleVenues:(bool)arg6;

@end
