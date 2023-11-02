
@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {
    id /* block */  _block;
    NSArray * _times;
}

- (void)_effectiveRateChanged;
- (void)_fireBlock;
- (void)_handleTimeDiscontinuity;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_nextFiringTimeAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_previousFiringTimeBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_resetNextFireTime;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase { }*)arg1 times:(id)arg2 queue:(id)arg3 block:(id /* block */)arg4;

@end
