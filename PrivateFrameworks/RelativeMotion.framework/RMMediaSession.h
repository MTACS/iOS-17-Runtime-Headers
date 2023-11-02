
@interface RMMediaSession : NSObject {
    long long  _clientMode;
    RMRelativeMotionManager * _manager;
    double  _sessionStartTimestamp;
    bool  _sessionStartedWithTracking;
}

@property (nonatomic) long long clientMode;
@property (nonatomic, retain) RMRelativeMotionManager *manager;
@property (nonatomic) double sessionStartTimestamp;
@property bool sessionStartedWithTracking;

+ (bool)_isClientModeAvailable:(long long)arg1;
+ (bool)isAvailable;

- (void).cxx_destruct;
- (long long)_currentAudioListenerPose:(id*)arg1;
- (long long)_currentAudioListenerPose:(struct { double x1; double x2; double x3; double x4; }*)arg1 timestamp:(double*)arg2;
- (id)_initWithOptions:(id)arg1;
- (void)_resetTrackingForAllClients;
- (bool)_start;
- (void)_stop;
- (long long)clientMode;
- (void)dealloc;
- (id)init;
- (bool)isAXHeadTrackingSettingEnabled;
- (id)manager;
- (double)sessionStartTimestamp;
- (bool)sessionStartedWithTracking;
- (void)setClientMode:(long long)arg1;
- (void)setManager:(id)arg1;
- (void)setSessionStartTimestamp:(double)arg1;
- (void)setSessionStartedWithTracking:(bool)arg1;
- (void)startMonitoringAXHeadTrackingSetting;
- (void)stopMonitoringAXHeadTrackingSetting;

@end
