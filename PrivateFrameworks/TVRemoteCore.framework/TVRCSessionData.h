
@interface TVRCSessionData : NSObject {
    bool  _directionalControlsEnabled;
    NSString * _launchContextDesc;
    bool  _requiredPairing;
    NSDate * _sessionStartTime;
    bool  _usedRTI;
    bool  _usedSiri;
}

@property (nonatomic) bool directionalControlsEnabled;
@property (nonatomic, copy) NSString *launchContextDesc;
@property (nonatomic) bool requiredPairing;
@property (nonatomic, retain) NSDate *sessionStartTime;
@property (nonatomic) bool usedRTI;
@property (nonatomic) bool usedSiri;

- (void).cxx_destruct;
- (bool)directionalControlsEnabled;
- (id)launchContextDesc;
- (bool)requiredPairing;
- (id)sessionStartTime;
- (void)setDirectionalControlsEnabled:(bool)arg1;
- (void)setLaunchContextDesc:(id)arg1;
- (void)setRequiredPairing:(bool)arg1;
- (void)setSessionStartTime:(id)arg1;
- (void)setUsedRTI:(bool)arg1;
- (void)setUsedSiri:(bool)arg1;
- (bool)usedRTI;
- (bool)usedSiri;

@end
