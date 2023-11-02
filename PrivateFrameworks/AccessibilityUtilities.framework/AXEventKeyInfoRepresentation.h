
@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSCopying, NSSecureCoding> {
    unsigned short  _alternativeKeyCode;
    NSString * _backupModifiedInput;
    NSString * _backupShiftModifiedInput;
    NSString * _backupUnmodifiedInput;
    unsigned int  _gsModifierState;
    unsigned short  _keyCode;
    bool  _keyDown;
    NSString * _modifiedInput;
    unsigned int  _modifierState;
    NSString * _shiftModifiedInput;
    NSString * _unmodifiedInput;
    unsigned int  _usagePage;
}

@property (nonatomic) unsigned short alternativeKeyCode;
@property (nonatomic, copy) NSString *backupModifiedInput;
@property (nonatomic, copy) NSString *backupShiftModifiedInput;
@property (nonatomic, copy) NSString *backupUnmodifiedInput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int gsModifierState;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short keyCode;
@property (nonatomic) bool keyDown;
@property (nonatomic, copy) NSString *modifiedInput;
@property (nonatomic) unsigned int modifierState;
@property (nonatomic, copy) NSString *shiftModifiedInput;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *unmodifiedInput;
@property (nonatomic) unsigned int usagePage;

+ (unsigned char)_getIOHIDKeyboardTypeForGSKeyboardType:(unsigned char)arg1;
+ (struct __GSKeyboard { }*)_getUIKitKeyboardRef;
+ (struct __GSKeyboard { }*)_getUSUIKitKeyboardRef;
+ (void)prepareForKeycodeTranslation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __GSKeyboard { }*)_getUIKitKeyboardRef;
- (struct __GSKeyboard { }*)_getUSUIKitKeyboardRef;
- (id)accessibilityEventRepresentationTabularDescription;
- (unsigned short)alternativeKeyCode;
- (id)backupModifiedInput;
- (id)backupShiftModifiedInput;
- (id)backupUnmodifiedInput;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)gsModifierState;
- (id)initWithCoder:(id)arg1;
- (unsigned short)keyCode;
- (bool)keyDown;
- (id)modifiedInput;
- (unsigned int)modifierState;
- (void)setAlternativeKeyCode:(unsigned short)arg1;
- (void)setBackupModifiedInput:(id)arg1;
- (void)setBackupShiftModifiedInput:(id)arg1;
- (void)setBackupUnmodifiedInput:(id)arg1;
- (void)setGsModifierState:(unsigned int)arg1;
- (void)setKeyCode:(unsigned short)arg1;
- (void)setKeyDown:(bool)arg1;
- (void)setModifiedInput:(id)arg1;
- (void)setModifierState:(unsigned int)arg1;
- (void)setShiftModifiedInput:(id)arg1;
- (void)setUnmodifiedInput:(id)arg1;
- (void)setUsagePage:(unsigned int)arg1;
- (id)shiftModifiedInput;
- (void)translateKeycode;
- (void)translateStringToKeycode;
- (id)unmodifiedInput;
- (unsigned int)usagePage;

@end
