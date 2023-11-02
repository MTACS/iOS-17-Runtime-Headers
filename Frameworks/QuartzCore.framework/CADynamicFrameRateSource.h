
@interface CADynamicFrameRateSource : NSObject {
    struct DynamicFrameRateSource { unsigned int x1; void *x2; struct CAFrameRateRange { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct CAFrameIntervalRange { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; unsigned long long x5; int x6; unsigned long long x7; unsigned long long x8; unsigned int x9[4]; unsigned int x10 : 1; struct DynamicFrameRateSource {} *x11; unsigned int x12 : 1; } * _impl;
}

@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;

- (double)commitDeadline;
- (double)commitDeadlineAfterTimestamp:(double)arg1;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (bool)isPaused;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (void)setHighFrameRateReasons:(const unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (bool)shiftFramePhaseBy:(double)arg1;

@end
