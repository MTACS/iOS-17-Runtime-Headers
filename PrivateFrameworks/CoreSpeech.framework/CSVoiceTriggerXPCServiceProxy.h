
@interface CSVoiceTriggerXPCServiceProxy : NSObject {
    NSMutableSet * _activationAssertions;
    CSSiriAssertionMonitor * _assertionMonitor;
    bool  _isPhraseSpotterBypassed;
    bool  _isRaiseToSpeakBypassed;
    NSHashTable * _observers;
}

@property (nonatomic, retain) NSMutableSet *activationAssertions;
@property (nonatomic, retain) CSSiriAssertionMonitor *assertionMonitor;
@property (nonatomic) bool isPhraseSpotterBypassed;
@property (nonatomic) bool isRaiseToSpeakBypassed;
@property (nonatomic, retain) NSHashTable *observers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchAssertionMonitor;
- (id)activationAssertions;
- (id)assertionMonitor;
- (void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (id)fetchVoiceTriggerStats;
- (id)init;
- (id)initWithAssertionMonitor:(id)arg1;
- (bool)isPhraseSpotterBypassed;
- (bool)isRaiseToSpeakBypassed;
- (void)notifyServiceConnectionLost;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (id)observers;
- (void)registerObserver:(id)arg1;
- (void)setActivationAssertions:(id)arg1;
- (void)setAssertionMonitor:(id)arg1;
- (void)setIsPhraseSpotterBypassed:(bool)arg1;
- (void)setIsRaiseToSpeakBypassed:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2;
- (void)setRaiseToSpeakBypassing:(bool)arg1 timeout:(double)arg2;
- (void)unregisterObserver:(id)arg1;

@end
