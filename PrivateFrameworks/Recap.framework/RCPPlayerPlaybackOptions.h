
@interface RCPPlayerPlaybackOptions : NSObject {
    id /* block */  _customizeHIDEvent;
    double  _firstEventFrameDelay;
    bool  _ignoreSenderProperties;
    bool  _linkEventDeliveryToDisplayRefreshRate;
    double  _minDelayBetweenSends;
    double  _playbackSpeedFactor;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    bool  _useHIDEventTimestampsForDelivery;
    bool  _useVirtualHIDServices;
}

@property (nonatomic, copy) id /* block */ customizeHIDEvent;
@property (nonatomic) double firstEventFrameDelay;
@property (nonatomic) bool ignoreSenderProperties;
@property (nonatomic) bool linkEventDeliveryToDisplayRefreshRate;
@property (nonatomic) double minDelayBetweenSends;
@property (nonatomic) double playbackSpeedFactor;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic) bool useHIDEventTimestampsForDelivery;
@property (nonatomic) bool useVirtualHIDServices;

- (void).cxx_destruct;
- (id /* block */)customizeHIDEvent;
- (double)firstEventFrameDelay;
- (bool)ignoreSenderProperties;
- (id)init;
- (bool)linkEventDeliveryToDisplayRefreshRate;
- (double)minDelayBetweenSends;
- (double)playbackSpeedFactor;
- (void)setCustomizeHIDEvent:(id /* block */)arg1;
- (void)setFirstEventFrameDelay:(double)arg1;
- (void)setIgnoreSenderProperties:(bool)arg1;
- (void)setLinkEventDeliveryToDisplayRefreshRate:(bool)arg1;
- (void)setMinDelayBetweenSends:(double)arg1;
- (void)setPlaybackSpeedFactor:(double)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setUseHIDEventTimestampsForDelivery:(bool)arg1;
- (void)setUseVirtualHIDServices:(bool)arg1;
- (unsigned long long)timestampForEventReplay:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (bool)useHIDEventTimestampsForDelivery;
- (bool)useVirtualHIDServices;

@end
