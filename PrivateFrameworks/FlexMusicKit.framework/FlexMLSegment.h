
@interface FlexMLSegment : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSArray * _gainFunction;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _summaryTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trackTime;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly, copy) NSArray *gainFunction;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } summaryTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } trackTime;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)gainFunction;
- (id)initWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 summaryTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 gainFunction:(id)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })summaryTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trackTime;

@end
