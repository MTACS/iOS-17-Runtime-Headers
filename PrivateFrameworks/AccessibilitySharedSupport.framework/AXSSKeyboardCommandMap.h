
@interface AXSSKeyboardCommandMap : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _availableCommands;
    NSDictionary * _commandsToArraysOfKeyChords;
    NSDictionary * _keyChordsToCommands;
    NSMutableDictionary * _transientCommands;
    NSDictionary * _userDefinedCommandsToKeyChords;
}

@property (nonatomic, retain) NSSet *availableCommands;
@property (nonatomic, readonly) NSDictionary *commandsToArraysOfKeyChords;
@property (nonatomic, readonly) NSDictionary *keyChordsToCommands;
@property (nonatomic, readonly) NSMutableDictionary *transientCommands;
@property (nonatomic, readonly) NSDictionary *userDefinedCommandsToKeyChords;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCommandsToKeyChordsDictionary:(id)arg1;
- (void)_initializeDictionariesIfNeeded;
- (bool)_isAvailableCommand:(id)arg1;
- (bool)_validateCommandsToKeyChords:(id)arg1;
- (id)addCommandsForTransientKeyChords:(id)arg1;
- (id)availableCommands;
- (id)commandForKeyChord:(id)arg1;
- (id)commandMapWithKeyChord:(id)arg1 forCommand:(id)arg2;
- (id)commandsToArraysOfKeyChords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCommandMap:(id)arg1;
- (id)keyChordForCommand:(id)arg1;
- (id)keyChordsToCommands;
- (void)removeTransientKeyChordsForIdentifier:(id)arg1;
- (void)setAvailableCommands:(id)arg1;
- (id)transientCommands;
- (id)userDefinedCommandsToKeyChords;

@end
