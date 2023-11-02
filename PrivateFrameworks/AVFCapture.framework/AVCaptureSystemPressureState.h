
@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal * _internal;
}

@property (readonly) unsigned long long factors;
@property (readonly) NSString *level;

+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)factors;
- (int)figLevel;
- (id)init;
- (id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)level;
- (id)recommendedFrameRateRangeForPortrait;
- (id)spiDebugDescription;

@end
