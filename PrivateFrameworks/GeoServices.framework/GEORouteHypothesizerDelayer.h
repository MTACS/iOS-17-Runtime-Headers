
@interface GEORouteHypothesizerDelayer : NSObject {
    GEOXPCActivity * _activity;
    geo_isolater * _isolater;
    struct __CFBinaryHeap { } * _minHeap;
    GEORouteHypothesizer * _nextHypothesizer;
}

+ (void)checkin;

- (void).cxx_destruct;
- (void)_setNextHypothesizer:(id)arg1;
- (void)_startValidHypothesizers;
- (void)dealloc;
- (void)delayStartOfHypothesizer:(id)arg1;
- (id)init;

@end
