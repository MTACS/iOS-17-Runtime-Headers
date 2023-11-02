
@interface HMIVideoTimelineProfiler : HMFObject {
    HMITimeIntervalAverage * _average;
    HMIVideoTimeline * _timeline;
}

- (void).cxx_destruct;
- (double)averageTime;
- (void)endedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithMaxCapacity:(long long)arg1;
- (void)startedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
