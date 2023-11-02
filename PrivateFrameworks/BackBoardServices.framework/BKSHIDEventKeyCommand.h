
@interface BKSHIDEventKeyCommand : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding> {
    NSString * _commandModifiedInput;
    NSString * _input;
    long long  _keyCode;
    long long  _modifierFlags;
    NSString * _shiftModifiedInput;
    NSString * _unmodifiedInput;
    long long  _usagePage;
}

@property (nonatomic, retain) NSString *commandModifiedInput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *input;
@property (readonly) bool isRoutableKeyCommand;
@property (nonatomic, readonly) bool isTextualKeyCommand;
@property (nonatomic, readonly) long long keyCode;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, retain) NSString *shiftModifiedInput;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *unmodifiedInput;
@property (nonatomic) long long usagePage;

+ (bool)_isModifierKeyWithPage:(long long)arg1 usage:(long long)arg2;
+ (bool)_shouldMatchKeyCommandsForEvent:(struct __IOHIDEvent { }*)arg1 gsKeyboard:(struct __GSKeyboard { }*)arg2;
+ (id)keyCommandForEvent:(struct __IOHIDEvent { }*)arg1 gsKeyboard:(struct __GSKeyboard { }*)arg2;
+ (id)keyCommandForEvent:(struct __IOHIDEvent { }*)arg1 gsKeyboard:(struct __GSKeyboard { }*)arg2 activeModifiers:(long long*)arg3;
+ (id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2;
+ (id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendPropertiesCommon:(id)arg1;
- (id)_initWithInput:(id)arg1 keyCode:(long long)arg2 modifierFlags:(long long)arg3;
- (id)_sanitizedInputForDescription;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)commandModifiedInput;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)describes:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (bool)isModifierOnlyCommand;
- (bool)isRoutableKeyCommand;
- (bool)isTextualKeyCommand;
- (long long)keyCode;
- (long long)modifierFlags;
- (void)setCommandModifiedInput:(id)arg1;
- (void)setShiftModifiedInput:(id)arg1;
- (void)setUnmodifiedInput:(id)arg1;
- (void)setUsagePage:(long long)arg1;
- (id)shiftModifiedInput;
- (id)unmodifiedInput;
- (long long)usagePage;

@end
