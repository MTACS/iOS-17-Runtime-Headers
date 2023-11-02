
@interface GEOComposedTransitStationRouteSegment : GEOComposedTransitBaseRouteSegment

- (bool)hasEnterStationManeuver;
- (bool)hasExitStationManeuver;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 stepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 transitStepRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 pointRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 segmentIndex:(unsigned long long)arg6;
- (bool)isTransfer;
- (long long)type;

@end
