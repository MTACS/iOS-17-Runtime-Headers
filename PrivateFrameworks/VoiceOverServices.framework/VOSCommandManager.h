
@interface VOSCommandManager : NSObject <VOSCommandProfileDelegate> {
    VOSCommandProfile * _activeProfile;
    bool  _activeProfileIsUserProfile;
    bool  _loadShortcuts;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _siriShortCutToken;
}

@property (nonatomic, readonly) VOSCommandProfile *activeProfile;
@property (nonatomic) bool activeProfileIsUserProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadShortcuts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_commonUserProfileInit;
- (void)_loadSystemProfile;
- (bool)_validateUserProfileDiscrepancies:(id)arg1;
- (id)activeProfile;
- (bool)activeProfileIsUserProfile;
- (id)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)allCommandsWithResolver:(id)arg1;
- (id)allShortcutBindingsWithResolver:(id)arg1;
- (id)allSiriShortcutCommandsWithResolver:(id)arg1;
- (unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2;
- (id)availableSiriShortcuts:(id)arg1;
- (void)batchUpdateActiveProfile:(id /* block */)arg1 saveIfSuccessful:(bool)arg2 completion:(id /* block */)arg3;
- (id)commandForKeyChord:(id)arg1 withResolver:(id)arg2;
- (id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2;
- (bool)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2;
- (bool)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2;
- (id)init;
- (id)initPreferringUserProfile;
- (id)initPreferringUserProfileWithoutShortcuts;
- (id)initWithSystemProfile;
- (bool)loadShortcuts;
- (void)reloadPreferringUserProfile;
- (void)reloadWithSystemProfile;
- (id)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (void)restoreDefaultProfile;
- (void)saveAsUserProfile;
- (void)setActiveProfileIsUserProfile:(bool)arg1;
- (void)setLoadShortcuts:(bool)arg1;
- (id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2;
- (id)systemProfile;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)arg1;
- (id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;

@end
