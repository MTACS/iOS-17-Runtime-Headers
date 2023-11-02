
@protocol SVXTaskTracking <NSObject>

@required

- (NSString *)aceId;
- (SVXActivationContext *)activationContext;
- (<SVXTaskTracking> *)beginChildWithContext:(SVXTaskContext *)arg1;
- (SVXTaskContext *)context;
- (SVXDeactivationContext *)deactivationContext;
- (NSString *)dialogIdentifier;
- (NSString *)dialogPhase;
- (NSError *)error;
- (AFAnalyticsTurnBasedInstrumentationContext *)instrumentationContext;
- (bool)isUUFR;
- (SAUIListenAfterSpeakingBehavior *)listenAfterSpeakingBehavior;
- (bool)listensAfterSpeaking;
- (long long)origin;
- (<SVXTaskTracking> *)parent;
- (NSString *)refId;
- (NSUUID *)requestUUID;
- (NSUUID *)sessionUUID;
- (unsigned long long)timestamp;

@end
