
@interface CAFrameRateRangeGroup : NSObject {
    unsigned int  _current_reason_count;
    void * _impl;
    unsigned int  _reasons;
}

@property (nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } arbitratedRange;

- (void)addCompatQuantaIntent;
- (void)addFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)addReason:(unsigned int)arg1;
- (struct CAFrameIntervalRange { unsigned int x1; unsigned int x2; unsigned int x3; })arbitratedIntervalRange;
- (struct CAFrameRateRange { float x1; float x2; float x3; })arbitratedRange;
- (void)dealloc;
- (bool)hasCompatQuantaIntent;
- (id)initWithDisplay:(id)arg1;
- (id)initWithHeartbeatRate:(double)arg1 minimumFrameDuration:(unsigned char)arg2 supportsVRR:(bool)arg3 compatQuantaMode:(bool)arg4 serverCompatQuantaMode:(bool)arg5;
- (const unsigned int*)reasonsWithCount:(unsigned int*)arg1;
- (void)removeFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)updateFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 toRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg2;

@end
