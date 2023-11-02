
@interface SVXTaskTracker : NSObject <SVXTaskTracking> {
    SVXTaskContext * _context;
    <SVXTaskTrackingDelegate> * _delegate;
    AFAnalyticsTurnBasedInstrumentationContext * _instrumentationContext;
    <SVXTaskTracking> * _parent;
}

@property (nonatomic, readonly) NSString *aceId;
@property (nonatomic, readonly) SVXActivationContext *activationContext;
@property (nonatomic, readonly, copy) SVXTaskContext *context;
@property (nonatomic, readonly) SVXDeactivationContext *deactivationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *dialogIdentifier;
@property (nonatomic, readonly) NSString *dialogPhase;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AFAnalyticsTurnBasedInstrumentationContext *instrumentationContext;
@property (nonatomic, readonly) bool isUUFR;
@property (nonatomic, readonly) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (nonatomic, readonly) bool listensAfterSpeaking;
@property (nonatomic, readonly) long long origin;
@property (nonatomic, readonly) <SVXTaskTracking> *parent;
@property (nonatomic, readonly) NSString *refId;
@property (nonatomic, readonly) NSUUID *requestUUID;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)aceId;
- (id)activationContext;
- (id)beginChildWithContext:(id)arg1;
- (id)context;
- (id)deactivationContext;
- (void)dealloc;
- (id)description;
- (id)dialogIdentifier;
- (id)dialogPhase;
- (id)error;
- (id)initWithContext:(id)arg1 instrumentationContext:(id)arg2 delegate:(id)arg3;
- (id)instrumentationContext;
- (bool)isUUFR;
- (id)listenAfterSpeakingBehavior;
- (bool)listensAfterSpeaking;
- (long long)origin;
- (id)parent;
- (id)refId;
- (id)requestUUID;
- (id)sessionUUID;
- (unsigned long long)timestamp;

@end
