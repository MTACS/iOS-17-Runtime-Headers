
@interface SBTraitsWindowParticipantDelegate : NSObject <SBTraitsParticipantDelegate> {
    NSMapTable * _participantOwningWindowMapTable;
    NSMutableDictionary * _tempLastPreferredZOrder;
    NSMutableDictionary * _tempLastSupportedOrientations;
    NSMutableArray * _tempOwningWindowHidden;
    NSMutableArray * _tempOwningWindowVisible;
    NSHashTable * _visibleWindows;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_activeOrientationDeterminingParticipantRoles;

- (void).cxx_destruct;
- (id)_autorotationPreventionReasons:(id)arg1;
- (bool)_isWindowContentVisible:(id)arg1;
- (unsigned long long)_validatedSupportedInterfaceOrientations:(unsigned long long)arg1 forWindow:(id)arg2;
- (id)_validationFailureReasonForWindow:(id)arg1;
- (void)appendDescriptionForParticipant:(id)arg1 withBuilder:(id)arg2 multilinePrefix:(id)arg3;
- (void)didChangeSettingsForParticipant:(id)arg1 context:(id)arg2;
- (id)init;
- (id)participantAssociatedSceneIdentityTokens:(id)arg1;
- (id)participantAssociatedWindows:(id)arg1;
- (void)participantWillInvalidate:(id)arg1;
- (void)setParticipant:(id)arg1 ownedByWindow:(id)arg2;
- (void)updatePreferencesForParticipant:(id)arg1 updater:(id)arg2;
- (void)validateSettingsForParticipant:(id)arg1 validator:(id)arg2;
- (void)windowDidUpdatePreferredWindowLevel:(double)arg1 ownedParticipant:(id)arg2;
- (void)windowDidUpdateSupportedOrientations:(unsigned long long)arg1 ownedParticipant:(id)arg2;
- (void)windowWillBecomeHidden:(id)arg1 ownedParticipant:(id)arg2;
- (void)windowWillBecomeVisible:(id)arg1 ownedParticipant:(id)arg2;

@end
