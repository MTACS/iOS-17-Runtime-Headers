
@interface AVCaptureSystemPressureStateInternal : NSObject {
    unsigned long long  _factors;
    int  _figLevel;
    AVFrameRateRange * _recommendedFrameRateRangeForPortrait;
}

@property (readonly) unsigned long long factors;
@property (readonly) int figLevel;
@property (readonly) AVFrameRateRange *recommendedFrameRateRangeForPortrait;

- (void)dealloc;
- (unsigned long long)factors;
- (int)figLevel;
- (id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;
- (id)recommendedFrameRateRangeForPortrait;

@end
