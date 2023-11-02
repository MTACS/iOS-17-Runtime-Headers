
@interface UIKey : NSObject <NSCoding, NSCopying> {
    long long  _keyCode;
    NSString * _modifiedInput;
    long long  _modifierFlags;
    NSString * _unmodifiedInput;
}

@property (nonatomic, readonly) NSString *characters;
@property (nonatomic, readonly) NSString *charactersIgnoringModifiers;
@property (setter=_setKeyCode:, nonatomic) long long keyCode;
@property (setter=_setModifiedInput:, nonatomic, retain) NSString *modifiedInput;
@property (setter=_setModifierFlags:, nonatomic) long long modifierFlags;
@property (setter=_setUnmodifiedInput:, nonatomic, retain) NSString *unmodifiedInput;

- (void).cxx_destruct;
- (id)_initWithKey:(id)arg1;
- (void)_setKeyCode:(long long)arg1;
- (void)_setModifiedInput:(id)arg1;
- (void)_setModifierFlags:(long long)arg1;
- (void)_setUnmodifiedInput:(id)arg1;
- (id)characters;
- (id)charactersIgnoringModifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)equalsKeyCode:(long long)arg1 modifiers:(long long)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)keyCode;
- (long long)modiferFlagsWithoutCapsLockOrNumberPad;
- (id)modifiedInput;
- (long long)modifierFlags;
- (bool)modifiersEqual:(long long)arg1;
- (id)unmodifiedInput;
- (bool)unmodifiedKeyCodeEquals:(long long)arg1;

@end
