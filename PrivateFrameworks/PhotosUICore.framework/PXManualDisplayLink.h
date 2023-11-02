
@interface PXManualDisplayLink : NSObject <PXDisplayLinkProtocol> {
    double  _duration;
    unsigned long long  _frameRateRangeType;
    unsigned int  _highFrameRateReason;
    bool  _paused;
    long long  _preferredFramesPerSecond;
    SEL  _selector;
    id  _target;
    double  _targetTimestamp;
}

@property (nonatomic, readonly) double currentMediaTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) unsigned long long frameRateRangeType;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) double targetTimestamp;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (double)currentMediaTime;
- (id)description;
- (double)duration;
- (unsigned long long)frameRateRangeType;
- (unsigned int)highFrameRateReason;
- (void)incrementTargetTimeWithInterval:(double)arg1;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (bool)paused;
- (long long)preferredFramesPerSecond;
- (SEL)selector;
- (void)setFrameRateRangeType:(unsigned long long)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (id)target;
- (double)targetTimestamp;
- (double)timestamp;

@end
