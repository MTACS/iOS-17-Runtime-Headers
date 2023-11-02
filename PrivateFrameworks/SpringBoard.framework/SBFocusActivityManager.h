
@interface SBFocusActivityManager : NSObject <DNDModeSelectionServiceListener, FCUISystemApertureElementProviding, SBFocusActivityPickerTransientOverlayViewControllerDelegate, SBSystemActionValidating> {
    NSSet * _availableModes;
    NSObject<OS_dispatch_queue> * _availableModesFetchQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _availableModesLock;
    SBSystemActionCompoundPreviewAssertion * _compoundPreviewAssertion;
    SBFocusEnablementIndicatorSystemApertureActivityElement * _focusElement;
    <SAInvalidatable> * _focusElementAssertion;
    FCUIFocusEnablementIndicatorManager * _focusEnablementIndicatorManager;
    DNDModeSelectionService * _modeSelectionService;
    NSString * _previewingModeIdentifier;
    SBFocusActivityPickerTransientOverlayViewController * _transientOverlay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createFocusElementForActivityDescription:(id)arg1 enabled:(bool)arg2;
- (id)createPersistentFocusElementForActivityDescription:(id)arg1 enabled:(bool)arg2;
- (void)focusActivityPickerTransientOverlayViewController:(id)arg1 didDismiss:(bool)arg2;
- (void)modeSelectionService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;
- (void)modeSelectionService:(id)arg1 didReceiveModesUpdate:(id)arg2;
- (void)modeSelectionService:(id)arg1 didReceiveUpdatedActiveModeAssertion:(id)arg2 stateUpdate:(id)arg3;
- (bool)shouldPreviewSystemAction:(id)arg1;

@end
