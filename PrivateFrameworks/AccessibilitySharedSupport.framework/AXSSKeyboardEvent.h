
@interface AXSSKeyboardEvent : NSObject <NSCopying> {
    NSString * _backupUnicodeCharacter;
    bool  _isCapsLockDown;
    bool  _isDownEvent;
    bool  _isFnDown;
    bool  _isLeftCommandDown;
    bool  _isLeftControlDown;
    bool  _isLeftOptionDown;
    bool  _isLeftShiftDown;
    bool  _isModifierChangedEvent;
    bool  _isRepeatEvent;
    bool  _isRightCommandDown;
    bool  _isRightControlDown;
    bool  _isRightOptionDown;
    bool  _isRightShiftDown;
    unsigned long long  _keyCode;
    NSString * _unicodeCharacter;
}

@property (nonatomic, readonly) AXSSKeyChord *backupKeyChord;
@property (nonatomic, copy) NSString *backupUnicodeCharacter;
@property (nonatomic) bool isCapsLockDown;
@property (nonatomic, readonly) bool isCommandDown;
@property (nonatomic, readonly) bool isControlDown;
@property (nonatomic) bool isDownEvent;
@property (nonatomic) bool isFnDown;
@property (nonatomic) bool isLeftCommandDown;
@property (nonatomic) bool isLeftControlDown;
@property (nonatomic) bool isLeftOptionDown;
@property (nonatomic) bool isLeftShiftDown;
@property (nonatomic) bool isModifierChangedEvent;
@property (nonatomic, readonly) bool isOptionDown;
@property (nonatomic) bool isRepeatEvent;
@property (nonatomic) bool isRightCommandDown;
@property (nonatomic) bool isRightControlDown;
@property (nonatomic) bool isRightOptionDown;
@property (nonatomic) bool isRightShiftDown;
@property (nonatomic, readonly) bool isShiftDown;
@property (nonatomic, readonly) AXSSKeyChord *keyChord;
@property (nonatomic) unsigned long long keyCode;
@property (nonatomic, readonly) long long modifierMask;
@property (nonatomic, copy) NSString *unicodeCharacter;

- (void).cxx_destruct;
- (id)_keyChordForUnicodeCharacter:(id)arg1;
- (id)backupKeyChord;
- (id)backupUnicodeCharacter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isCapsLockDown;
- (bool)isCommandDown;
- (bool)isControlDown;
- (bool)isDownEvent;
- (bool)isFnDown;
- (bool)isLeftCommandDown;
- (bool)isLeftControlDown;
- (bool)isLeftOptionDown;
- (bool)isLeftShiftDown;
- (bool)isModifierChangedEvent;
- (bool)isOptionDown;
- (bool)isRepeatEvent;
- (bool)isRightCommandDown;
- (bool)isRightControlDown;
- (bool)isRightOptionDown;
- (bool)isRightShiftDown;
- (bool)isShiftDown;
- (id)keyChord;
- (unsigned long long)keyCode;
- (long long)modifierMask;
- (void)setBackupUnicodeCharacter:(id)arg1;
- (void)setIsCapsLockDown:(bool)arg1;
- (void)setIsDownEvent:(bool)arg1;
- (void)setIsFnDown:(bool)arg1;
- (void)setIsLeftCommandDown:(bool)arg1;
- (void)setIsLeftControlDown:(bool)arg1;
- (void)setIsLeftOptionDown:(bool)arg1;
- (void)setIsLeftShiftDown:(bool)arg1;
- (void)setIsModifierChangedEvent:(bool)arg1;
- (void)setIsRepeatEvent:(bool)arg1;
- (void)setIsRightCommandDown:(bool)arg1;
- (void)setIsRightControlDown:(bool)arg1;
- (void)setIsRightOptionDown:(bool)arg1;
- (void)setIsRightShiftDown:(bool)arg1;
- (void)setKeyCode:(unsigned long long)arg1;
- (void)setUnicodeCharacter:(id)arg1;
- (id)unicodeCharacter;

@end
