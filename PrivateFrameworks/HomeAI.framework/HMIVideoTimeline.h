
@interface HMIVideoTimeline : HMFObject {
    HMIVideoEventBuffer * _buffer;
}

- (void).cxx_destruct;
- (void)addDate:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)dateAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithMaxCapacity:(long long)arg1;
- (double)timeIntervalSinceDateAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
