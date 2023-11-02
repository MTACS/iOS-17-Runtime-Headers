
@interface AXMLiveContinuousTone : AXMTone {
    unsigned long long  _framesRendered;
    bool  _muted;
    double  _phase;
    unsigned long long  _releaseFrame;
    bool  _releasing;
}

@property (nonatomic) unsigned long long framesRendered;
@property (nonatomic) bool muted;
@property (nonatomic, readonly) double phase;
@property (nonatomic) unsigned long long releaseFrame;
@property (nonatomic) bool releasing;

- (unsigned long long)framesRendered;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (bool)muted;
- (double)phase;
- (unsigned long long)releaseFrame;
- (bool)releasing;
- (void)renderInBuffer:(void*)arg1 atFrame:(unsigned long long)arg2 numSamples:(unsigned long long)arg3;
- (void)resetRelease;
- (void)setFramesRendered:(unsigned long long)arg1;
- (void)setFrequency:(double)arg1;
- (void)setMuted:(bool)arg1;
- (void)setReleaseFrame:(unsigned long long)arg1;
- (void)setReleasing:(bool)arg1;
- (void)startRelease;

@end
