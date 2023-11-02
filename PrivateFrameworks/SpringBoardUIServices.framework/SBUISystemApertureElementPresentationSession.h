
@interface SBUISystemApertureElementPresentationSession : NSObject <BSInvalidatable> {
    SBUISystemApertureElementSource * _associatedSource;
    <SBUISystemApertureElementProviding> * _elementProvider;
    SBSSystemApertureSceneCreationRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_associateWithSourceIfNeeded:(id)arg1;
- (void)_handleSourceDidConnect:(id)arg1;
- (void)activateWithElementProvider:(id)arg1;
- (void)invalidate;

@end
