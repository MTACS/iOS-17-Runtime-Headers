
@interface PGPublicEventTemporalClusterComparator : NSObject

- (double)_distanceFromString:(id)arg1 toString:(id)arg2;
- (id)_removeDateFromString:(id)arg1;
- (double)distanceFromPublicEvent:(id)arg1 toTemporalEvents:(id)arg2;

@end
