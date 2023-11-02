
@interface SFWatchAuthenticationEvent : NSObject <SFCoreAnalyticsEvent> {
    unsigned long long  _authenticationType;
    double  _awdlBringUpDuration;
    double  _discoveryDuration;
    unsigned int  _failureReason;
    double  _keyExchangeDuration;
    double  _peerFoundDuration;
    double  _rangingDuration;
    NSString * _remoteHardwareModel;
    NSString * _remoteSoftwareVersion;
    bool  _screenOn;
    bool  _succeeded;
    double  _timeSinceBoot;
    double  _timeSinceRemoteUnlocked;
    double  _totalDuration;
    NSString * _watchHardwareModel;
    NSString * _watchSoftwareVersion;
}

@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) double awdlBringUpDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double discoveryDuration;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (nonatomic) unsigned int failureReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyExchangeDuration;
@property (nonatomic) double peerFoundDuration;
@property (nonatomic) double rangingDuration;
@property (nonatomic, copy) NSString *remoteHardwareModel;
@property (nonatomic, copy) NSString *remoteSoftwareVersion;
@property (nonatomic) bool screenOn;
@property (nonatomic) bool succeeded;
@property (readonly) Class superclass;
@property (nonatomic) double timeSinceBoot;
@property (nonatomic) double timeSinceRemoteUnlocked;
@property (nonatomic) double totalDuration;
@property (nonatomic, copy) NSString *watchHardwareModel;
@property (nonatomic, copy) NSString *watchSoftwareVersion;

+ (id)eventName;

- (void).cxx_destruct;
- (unsigned long long)authenticationType;
- (double)awdlBringUpDuration;
- (double)discoveryDuration;
- (id)eventPayload;
- (unsigned int)failureReason;
- (double)keyExchangeDuration;
- (double)peerFoundDuration;
- (double)rangingDuration;
- (id)remoteHardwareModel;
- (id)remoteSoftwareVersion;
- (bool)screenOn;
- (void)setAuthenticationType:(unsigned long long)arg1;
- (void)setAwdlBringUpDuration:(double)arg1;
- (void)setDiscoveryDuration:(double)arg1;
- (void)setFailureReason:(unsigned int)arg1;
- (void)setKeyExchangeDuration:(double)arg1;
- (void)setPeerFoundDuration:(double)arg1;
- (void)setRangingDuration:(double)arg1;
- (void)setRemoteHardwareModel:(id)arg1;
- (void)setRemoteSoftwareVersion:(id)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)setSucceeded:(bool)arg1;
- (void)setTimeSinceBoot:(double)arg1;
- (void)setTimeSinceRemoteUnlocked:(double)arg1;
- (void)setTotalDuration:(double)arg1;
- (void)setWatchHardwareModel:(id)arg1;
- (void)setWatchSoftwareVersion:(id)arg1;
- (void)submitEvent;
- (bool)succeeded;
- (double)timeSinceBoot;
- (double)timeSinceRemoteUnlocked;
- (double)totalDuration;
- (id)watchHardwareModel;
- (id)watchSoftwareVersion;

@end
