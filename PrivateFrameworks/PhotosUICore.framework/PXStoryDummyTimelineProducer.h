
@interface PXStoryDummyTimelineProducer : NSObject <PXStoryTimelineProducer> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _fixedDuration;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } fixedDuration;

- (id)createTimelineWithConfiguration:(id)arg1 detailsFraction:(double)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fixedDuration;
- (id)requestTimelineWithConfiguration:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (void)setFixedDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
