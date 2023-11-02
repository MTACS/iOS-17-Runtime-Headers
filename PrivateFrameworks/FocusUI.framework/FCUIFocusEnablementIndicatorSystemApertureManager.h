
@interface FCUIFocusEnablementIndicatorSystemApertureManager : FCUIFocusEnablementIndicatorManager <FCActivityManagerObserving> {
    <FCUISystemApertureElementProviding> * _elementProvider;
    <SAElementRegistering> * _elementRegistrar;
    FCUIFocusEnablementIndicatorSystemApertureElement * _lastPresentedElement;
    FCUIFocusEnablementIndicatorSystemApertureActivityElement * _lastPresentedPersistentElement;
    <SAInvalidatable> * _registeredElementAssertion;
    <SAInvalidatable> * _registeredPersistentElementAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)managerWithSystemApertureElementRegistrar:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithSystemApertureElementRegistrar:(id)arg1;
- (void)postActivity:(id)arg1 enabled:(bool)arg2;
- (id)postPersistentActivity:(id)arg1 enabled:(bool)arg2 systemApertureElementProvider:(id)arg3;
- (void)revokeWithReason:(id)arg1;
- (bool)shouldKeepPresentingAfterActiveActivityDidChange:(id)arg1 lastActivity:(id)arg2;

@end
