
@interface SASActivationRequest : NSObject {
    long long  _activationEvent;
    double  _activationTime;
    long long  _activationType;
    double  _buttonDownTime;
    SiriContext * _context;
    long long  _requestSource;
    int  _waketimeMIB;
    unsigned long long  _waketimeMIBSize;
}

@property (nonatomic) long long activationEvent;
@property (nonatomic) double activationTime;
@property (nonatomic) long long activationType;
@property (nonatomic) double buttonDownTime;
@property (nonatomic, retain) SiriContext *context;
@property (nonatomic) long long requestSource;

+ (long long)requestSourceForButtonIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (long long)activationEvent;
- (double)activationTime;
- (long long)activationType;
- (double)buttonDownTime;
- (double)buttonDownTimestamp;
- (double)computedActivationTime;
- (id)context;
- (id)description;
- (id)eventSource;
- (id)init;
- (id)initWithBluetoothKeyboardShortcutActivation:(long long)arg1;
- (id)initWithBreadcrumbRequest;
- (id)initWithButtonIdentifier:(long long)arg1 context:(id)arg2;
- (id)initWithContinuityContext:(id)arg1;
- (id)initWithContinuousConversationContext:(id)arg1;
- (id)initWithContinuousConversationHearstContext:(id)arg1;
- (id)initWithContinuousConversationJarvisContext:(id)arg1;
- (id)initWithDirectActionContext:(id)arg1;
- (id)initWithRemotePresentationBringUpContext:(id)arg1;
- (id)initWithSimpleActivation:(long long)arg1;
- (id)initWithSpotlightContext:(id)arg1;
- (id)initWithTestingContext:(id)arg1;
- (id)initWithVoiceTriggerContext:(id)arg1;
- (id)initWithVoiceTriggerRequest;
- (bool)isBluetoothRequest;
- (bool)isButtonRequest;
- (bool)isContinuityRequest;
- (bool)isContinuousConversationRequest;
- (bool)isDeviceButtonRequest;
- (bool)isDirectActionRequest;
- (bool)isEyesFreeRequestSource;
- (bool)isHoldToTalkSource;
- (bool)isRemoteDisplayVoiceRequest;
- (bool)isRemotePresentationBringUpRequest;
- (bool)isSpotlightRequest;
- (bool)isTestingRequest;
- (bool)isUIFreeRequestSource;
- (bool)isVoiceRequest;
- (long long)longPressBehavior;
- (long long)requestSource;
- (void)setActivationEvent:(long long)arg1;
- (void)setActivationTime:(double)arg1;
- (void)setActivationType:(long long)arg1;
- (void)setButtonDownTime:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setRequestSource:(long long)arg1;

@end
