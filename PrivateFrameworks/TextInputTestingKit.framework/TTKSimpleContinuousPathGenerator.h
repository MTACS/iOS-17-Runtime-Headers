
@interface TTKSimpleContinuousPathGenerator : TTKDefaultContinuousPathGenerator {
    double  _currentTimestamp;
}

- (bool)canHandleDoubleLetter;
- (id)generatePathFromInflectionPoints:(id)arg1 segmentTiming:(id)arg2 keys:(id)arg3 string:(id)arg4 layout:(id)arg5;
- (id)generatePathFromInflectionPoints:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 segmentTiming:(id)arg4 keys:(id)arg5 string:(id)arg6 layout:(id)arg7;
- (id)generatePathFromInflectionPoints:(id)arg1 timestamp:(double)arg2 segmentTiming:(id)arg3 keys:(id)arg4 string:(id)arg5 layout:(id)arg6;
- (id)initWithParams:(id)arg1;

@end
