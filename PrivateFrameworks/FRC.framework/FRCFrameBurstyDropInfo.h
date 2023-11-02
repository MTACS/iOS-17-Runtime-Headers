
@interface FRCFrameBurstyDropInfo : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _burstyBaseDuration;
    long long  _burstyIdx;
    long long  _burstyLen;
    long long  _burstyStart;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } burstyBaseDuration;
@property (nonatomic) long long burstyIdx;
@property (nonatomic) long long burstyLen;
@property (nonatomic) long long burstyStart;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })burstyBaseDuration;
- (long long)burstyIdx;
- (long long)burstyLen;
- (long long)burstyStart;
- (void)setBurstyBaseDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setBurstyIdx:(long long)arg1;
- (void)setBurstyLen:(long long)arg1;
- (void)setBurstyStart:(long long)arg1;

@end
