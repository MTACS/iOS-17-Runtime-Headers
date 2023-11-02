
@interface SBMirroredDisplayController : NSObject <SBDisplayControlling> {
    CADisplay * _caDisplay;
    FBSDisplayConfiguration * _currentConfiguration;
    SBDisplayAssertion * _displayAssertion;
    FBSDisplayIdentity * _displayIdentity;
    NSObject<OS_dispatch_queue> * _displayMutationQueue;
    SBExternalDisplayDefaults * _externalDisplayDefaults;
    NSString * _idleSleepReason;
    <FBSDisplayLayoutPublishing> * _layoutPublisher;
    BSAtomicSignal * _lostControlOfDisplaySignal;
    struct CGSize { 
        double width; 
        double height; 
    }  _requestedLogicalScale;
    CADisplayMode * _requestedMode;
    NSString * _requestedOverscanAdjustment;
    <BSInvalidatable> * _stateCaptureToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureCADisplayModeForMirroring;
- (void)_updateDisplayAssertion;
- (void)_updateIdleSleepReason:(id)arg1;
- (void)connectToDisplayIdentity:(id)arg1 configuration:(id)arg2 displayManager:(id)arg3 sceneManager:(id)arg4 caDisplayQueue:(id)arg5 assertion:(id)arg6;
- (void)dealloc;
- (id)description;
- (void)displayAssertion:(id)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1;
- (void)displayIdentityDidDisconnect:(id)arg1;
- (void)displayIdentityDidUpdate:(id)arg1 configuration:(id)arg2;
- (id)initWithExternalDisplayDefaults:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
