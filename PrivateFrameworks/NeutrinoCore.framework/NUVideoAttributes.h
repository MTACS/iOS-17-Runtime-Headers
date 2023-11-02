
@interface NUVideoAttributes : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)init;
- (id)initWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
