
@interface HDRaceRouteClusterManager : NSObject {
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (bool)generateRaceRouteClustersWithLimit:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (id)raceRouteClustersForActivityType:(unsigned long long)arg1 error:(id*)arg2;

@end
