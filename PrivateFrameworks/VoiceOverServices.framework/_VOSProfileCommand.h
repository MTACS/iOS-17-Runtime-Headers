
@interface _VOSProfileCommand : NSObject <NSSecureCoding> {
    VOSCommand * _command;
    NSMutableSet * _gestures;
    NSMutableSet * _keyboardShortcuts;
    _VOSProfileMode * _mode;
    NSMutableSet * _quickNavShortcuts;
    NSMutableSet * _secondaryCommands;
}

@property (nonatomic, retain) VOSCommand *command;
@property (nonatomic, retain) NSMutableSet *gestures;
@property (nonatomic, readonly) bool hasSecondaryCommands;
@property (nonatomic, retain) NSMutableSet *keyboardShortcuts;
@property (nonatomic) _VOSProfileMode *mode;
@property (nonatomic, retain) NSMutableSet *quickNavShortcuts;
@property (nonatomic, retain) NSMutableSet *secondaryCommands;

+ (id)profileCommandWithCommand:(id)arg1;
+ (id)profileCommandWithStringValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCommand:(id)arg1 gestures:(id)arg2 keyboardShortcuts:(id)arg3 quickNavShortcuts:(id)arg4 secondaryCommands:(id)arg5;
- (void)addGesture:(id)arg1;
- (void)addKeyboardShortcut:(id)arg1;
- (void)addQuickNavShortcut:(id)arg1;
- (void)addSecondaryCommand:(id)arg1;
- (id)command;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gestures;
- (bool)hasSecondaryCommands;
- (id)initWithCoder:(id)arg1;
- (id)keyboardShortcuts;
- (id)mode;
- (id)profileGestureForGesture:(id)arg1;
- (id)profileKeyboardShortcutForKeyChord:(id)arg1;
- (id)profileQuickNavShortcutForKeyChord:(id)arg1;
- (id)quickNavShortcuts;
- (void)removeGesture:(id)arg1;
- (void)removeKeyboardShortcut:(id)arg1;
- (void)removeQuickNavShortcut:(id)arg1;
- (void)removeSecondaryCommand:(id)arg1;
- (id)secondaryCommands;
- (id)secondaryCommandsForPressCount:(long long)arg1;
- (void)setCommand:(id)arg1;
- (void)setGestures:(id)arg1;
- (void)setKeyboardShortcuts:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setQuickNavShortcuts:(id)arg1;
- (void)setSecondaryCommands:(id)arg1;

@end
