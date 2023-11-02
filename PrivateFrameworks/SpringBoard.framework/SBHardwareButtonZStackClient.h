
@interface SBHardwareButtonZStackClient : NSObject <SBFZStackParticipantDelegate, SBHardwareButtonServiceObserver> {
    <BSInvalidatable> * _hardwareButtonObserverAssertion;
    SBHardwareButtonService * _hardwareButtonService;
    SBFZStackParticipant * _zStackParticipant;
    SBFZStackResolver * _zStackResolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BSInvalidatable> *hardwareButtonObserverAssertion;
@property (nonatomic, readonly) SBHardwareButtonService *hardwareButtonService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;
@property (nonatomic, readonly) SBFZStackResolver *zStackResolver;

- (void).cxx_destruct;
- (void)_updateZStackParticipant;
- (void)buttonService:(id)arg1 buttonKind:(long long)arg2 eventsConsumedDidChange:(unsigned long long)arg3;
- (void)dealloc;
- (id)hardwareButtonObserverAssertion;
- (id)hardwareButtonService;
- (id)initWithZStackResolver:(id)arg1 hardwareButtonService:(id)arg2;
- (void)setHardwareButtonObserverAssertion:(id)arg1;
- (void)setZStackParticipant:(id)arg1;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;
- (id)zStackResolver;

@end
