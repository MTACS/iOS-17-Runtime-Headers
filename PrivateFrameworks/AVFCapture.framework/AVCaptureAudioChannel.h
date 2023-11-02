
@interface AVCaptureAudioChannel : NSObject {
    bool  _enabled;
    AVCaptureAudioChannelInternal * _internal;
    float  _volume;
}

@property (nonatomic, readonly) float averagePowerLevel;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) float peakHoldLevel;
@property (nonatomic) float volume;

+ (void)initialize;

- (float)averagePowerLevel;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isEnabled;
- (float)peakHoldLevel;
- (void)setEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
