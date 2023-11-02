
@interface VOSCommandProfile : NSObject <NSSecureCoding> {
    <VOSCommandProfileDelegate> * _delegate;
    NSMutableSet * _modes;
}

@property (nonatomic) <VOSCommandProfileDelegate> *delegate;

+ (void)_addGesturesToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;
+ (void)_addKeyboardShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;
+ (void)_addQuickNavShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;
+ (void)_addSecondaryCommandsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;
+ (bool)_overlay:(id)arg1 shouldIncludeItem:(id)arg2;
+ (id)_parseProfileProperties:(id)arg1 overlayProperties:(id)arg2;
+ (id)_profileKeyChordsFromDictionaryValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithModes:(id)arg1;
- (id)_modifiedGestureRespectingHandednessSetting:(id)arg1;
- (id)_profileCommandForCommand:(id)arg1 inMode:(id)arg2;
- (id)_profileModeForResolver:(id)arg1;
- (id)_profileModeForScreenreaderMode:(id)arg1;
- (id)_resolvedSecondaryCommandForProfileCommand:(id)arg1 resolver:(id)arg2;
- (id)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)allCommandsWithResolver:(id)arg1;
- (id)allShortcutBindingsWithResolver:(id)arg1;
- (id)allSiriShortcutCommandsWithResolver:(id)arg1;
- (unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2;
- (unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2;
- (id)commandForKeyChord:(id)arg1 withResolver:(id)arg2;
- (id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2;
- (bool)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2;
- (bool)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2;
- (id)debugDescription;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileProperties:(id)arg1 overlayProperties:(id)arg2;
- (id)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)arg1;
- (id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;
- (id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;

@end
