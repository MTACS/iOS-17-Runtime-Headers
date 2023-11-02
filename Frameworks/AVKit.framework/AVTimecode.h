
@interface AVTimecode : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameDuration;
    long long  _frameNumber;
    unsigned int  _tc_flags;
    struct CVSMPTETime { 
        short subframes; 
        short subframeDivisor; 
        unsigned int counter; 
        unsigned int type; 
        unsigned int flags; 
        short hours; 
        short minutes; 
        short seconds; 
        short frames; 
    }  _timecodeStruct;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic) long long frameNumber;
@property (nonatomic) unsigned int tc_flags;
@property (nonatomic) struct CVSMPTETime { short x1; short x2; unsigned int x3; unsigned int x4; unsigned int x5; short x6; short x7; short x8; short x9; } timecodeStruct;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (long long)frameNumber;
- (id)initWithTimecodeString:(id)arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFrameNumber:(long long)arg1;
- (void)setTc_flags:(unsigned int)arg1;
- (void)setTimecodeStruct:(struct CVSMPTETime { short x1; short x2; unsigned int x3; unsigned int x4; unsigned int x5; short x6; short x7; short x8; short x9; })arg1;
- (bool)stringIsValidNumericValue:(id)arg1;
- (unsigned int)tc_flags;
- (struct CVSMPTETime { short x1; short x2; unsigned int x3; unsigned int x4; unsigned int x5; short x6; short x7; short x8; short x9; })timecodeStruct;

@end
