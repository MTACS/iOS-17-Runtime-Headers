
@interface EXBMirroredDisplayController : NSObject <EXBDisplayControlling> {
    CADisplay * _caDisplay;
    FBSDisplayConfiguration * _currentConfiguration;
    EXBDisplayAssertion * _displayAssertion;
    FBSDisplayIdentity * _displayIdentity;
    NSObject<OS_dispatch_queue> * _displayMutationQueue;
    NSString * _idleSleepReason;
    BSAtomicSignal * _lostControlOfDisplaySignal;
    struct CGSize { 
        double width; 
        double height; 
    }  _requestedLogicalScale;
    CADisplayMode * _requestedMode;
    NSString * _requestedOverscanAdjustment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureCADisplayModeForMirroring;
- (void)_updateDisplayAssertion;
- (void)_updateIdleSleepReason:(id)arg1;
- (void)connectToDisplayIdentity:(id)arg1 configuration:(id)arg2 displayTransformUpdater:(id)arg3 caDisplayQueue:(id)arg4 assertion:(id)arg5;
- (void)displayAssertion:(id)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1 previousDeactivationReasons:(unsigned long long)arg2;
- (void)displayIdentityDidDisconnect:(id)arg1;
- (void)displayIdentityDidUpdate:(id)arg1 configuration:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)transformDisplayConfigurationWithBuilder:(id)arg1;

@end
