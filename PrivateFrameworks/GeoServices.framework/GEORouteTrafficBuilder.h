
@interface GEORouteTrafficBuilder : NSObject {
    NSMutableArray * _trafficColors;
    double  _trafficDistance;
    NSMutableArray * _trafficOffsets;
}

- (void).cxx_destruct;
- (void)_buildTrafficForRoute:(id)arg1 etaRoute:(id)arg2;
- (void)_buildTrafficForRoute:(id)arg1 toDistance:(double)arg2;
- (void)_removeDuplicateTraffic;
- (void)addTrafficFromETARoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)addTrafficFromRoute:(id)arg1 withStepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)buildTrafficForRoute:(id)arg1;
- (void)buildTrafficForRoute:(id)arg1 etaRoute:(id)arg2;
- (void)copyTrafficToRoute:(id)arg1;
- (id)init;
- (id)trafficColors;
- (id)trafficOffsets;

@end
