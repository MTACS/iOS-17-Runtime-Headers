
@interface AVCTestMonitorInjectAudioConfig : NSObject {
    double  _amplitude;
    NSString * _audioFileName;
    int  _injectAudioConfigType;
    double  _loopLength;
    double  _startHostTime;
}

@property (nonatomic) double amplitude;
@property (nonatomic) NSString *audioFileName;
@property (nonatomic) int injectAudioConfigType;
@property (nonatomic) double loopLength;
@property (nonatomic) double startHostTime;

- (double)amplitude;
- (id)audioFileName;
- (int)injectAudioConfigType;
- (double)loopLength;
- (void)setAmplitude:(double)arg1;
- (void)setAudioFileName:(id)arg1;
- (void)setInjectAudioConfigType:(int)arg1;
- (void)setLoopLength:(double)arg1;
- (void)setStartHostTime:(double)arg1;
- (double)startHostTime;

@end
