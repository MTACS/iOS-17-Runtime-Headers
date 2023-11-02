
@interface SBTraitsSceneOrientationRequestAssistant : NSObject <BSInvalidatable> {
    NSString * _errorDomain;
    SBTraitsSceneParticipantDelegate * _traitsDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *errorDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBTraitsSceneParticipantDelegate *traitsDelegate;

- (void).cxx_destruct;
- (void)_performCoalescedBroadcastArbitrationUpdateWithReason:(id)arg1;
- (void)_startSceneOrientationRequestWithDesiredOrientations:(unsigned long long)arg1 error:(out id*)arg2;
- (void)checkValidityAgainstUpdateReasons:(long long)arg1;
- (id)errorDomain;
- (id)initWithTraitsSceneDelegate:(id)arg1 errorDomain:(id)arg2;
- (void)invalidate;
- (void)setUpForTransitionContextIfNeeded:(id)arg1;
- (id)traitsDelegate;

@end
