
@interface PXStoryMockPacingCueSource : NSObject <PXStoryPacingCueSource> {
    <PXAudioCueSource> * _audioCueSource;
    NSArray * _cueTimes;
    long long  _cuesVersion;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTime;
}

@property (nonatomic, readonly) <PXAudioCueSource> *audioCueSource;
@property (nonatomic, readonly, copy) NSArray *cueTimes;
@property (nonatomic) long long cuesVersion;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;

- (void).cxx_destruct;
- (id)audioCueSource;
- (id)cueTimes;
- (long long)cuesVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)diagnosticCueStringForSize:(struct CGSize { double x1; double x2; })arg1 withIndicatorTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 rangeIndicatorTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (id)init;
- (id)initWithCueTimes:(id)arg1;
- (void)setCuesVersion:(long long)arg1;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
