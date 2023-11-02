
@interface _NACVolumeObserverRecord : NSObject {
    float  _EUVolumeLimit;
    bool  _muted;
    <NACVolumeController> * _nacVolumeController;
    MPAVRoutingController * _routingController;
    NACEventThrottler * _throttler;
    bool  _volumeControlAvailable;
    MPVolumeController * _volumeController;
    bool  _volumeWarningEnabled;
    long long  _volumeWarningState;
}

@property (nonatomic) float EUVolumeLimit;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, retain) <NACVolumeController> *nacVolumeController;
@property (nonatomic, retain) MPAVRoutingController *routingController;
@property (nonatomic, retain) NACEventThrottler *throttler;
@property (getter=isVolumeControlAvailable, nonatomic) bool volumeControlAvailable;
@property (nonatomic, retain) MPVolumeController *volumeController;
@property (getter=isVolumeWarningEnabled, nonatomic) bool volumeWarningEnabled;
@property (nonatomic) long long volumeWarningState;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (id)nacVolumeController;
- (id)routingController;
- (void)setEUVolumeLimit:(float)arg1;
- (void)setMuted:(bool)arg1;
- (void)setNacVolumeController:(id)arg1;
- (void)setRoutingController:(id)arg1;
- (void)setThrottler:(id)arg1;
- (void)setVolumeControlAvailable:(bool)arg1;
- (void)setVolumeController:(id)arg1;
- (void)setVolumeWarningEnabled:(bool)arg1;
- (void)setVolumeWarningState:(long long)arg1;
- (id)throttler;
- (id)volumeController;
- (long long)volumeWarningState;

@end
