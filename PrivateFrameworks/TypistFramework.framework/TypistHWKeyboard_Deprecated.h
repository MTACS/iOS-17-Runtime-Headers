
@interface TypistHWKeyboard_Deprecated : NSObject {
    NSObject<OS_dispatch_queue> * _TypistHWKeyboardQueue;
    NSMutableDictionary * _characterToKeycodeMap;
    struct __IOHIDUserDevice { } * _emulatedKeyboard;
    NSString * _emulatedModel;
    NSObject<OS_dispatch_group> * _group;
    struct __GSKeyboard { } * _hardwareKeyboard;
    unsigned int  _hidKeyboardType;
    NSNumber * _keyboardCountryCode;
    double  _typeInterval;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *TypistHWKeyboardQueue;
@property (nonatomic, retain) NSMutableDictionary *characterToKeycodeMap;
@property (nonatomic) struct __IOHIDUserDevice { }*emulatedKeyboard;
@property (nonatomic, retain) NSString *emulatedModel;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic) struct __GSKeyboard { }*hardwareKeyboard;
@property (nonatomic) unsigned int hidKeyboardType;
@property (nonatomic, retain) NSNumber *keyboardCountryCode;
@property (nonatomic) double typeInterval;

+ (unsigned int)GSEventMaskToKeyboardMask:(unsigned int)arg1;
+ (unsigned char)_convertCountryCodeToHIDKeyboardType:(unsigned char)arg1;
+ (unsigned char)_convertGSKeyboardTypeToIOHIDKeyboardType:(unsigned char)arg1;
+ (unsigned char)_convertHIDKeyboardTypeToGSKeyboardType:(unsigned int)arg1;
+ (id)_determineAppropriatePropertyDictionaryForHWModelStr:(id)arg1;
+ (id)_getModifierMaskMap;
+ (id)keyboardCountryCodes;
+ (id)modifierCharMap;

- (void).cxx_destruct;
- (id)TypistHWKeyboardQueue;
- (void)_insertKey:(unsigned short)arg1 gsKeyInfo:(struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6[24]; unsigned short x7; unsigned short x8[24]; unsigned short x9; unsigned short x10[24]; unsigned short x11; unsigned short x12; }*)arg2;
- (void)_setupCharacterToKeycodeMap;
- (id)characterToKeycodeMap;
- (void)detach:(id /* block */)arg1;
- (struct __IOHIDUserDevice { }*)emulatedKeyboard;
- (id)emulatedModel;
- (id)generateKeystrokeStream:(id)arg1;
- (id)generateKeystrokeStream:(id)arg1 position:(int*)arg2;
- (id)group;
- (struct __GSKeyboard { }*)hardwareKeyboard;
- (unsigned int)hidKeyboardType;
- (id)initWithCountryCode:(id)arg1;
- (id)initWithCountryCode:(id)arg1 andPropertyDictionaryAtPath:(id)arg2;
- (id)keyboardCountryCode;
- (void)pressAndHoldKey:(id)arg1 completion:(id /* block */)arg2;
- (void)releaseKeyPressWithCompletion:(id /* block */)arg1;
- (void)setCharacterToKeycodeMap:(id)arg1;
- (void)setEmulatedKeyboard:(struct __IOHIDUserDevice { }*)arg1;
- (void)setEmulatedModel:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setHardwareKeyboard:(struct __GSKeyboard { }*)arg1;
- (void)setHidKeyboardType:(unsigned int)arg1;
- (void)setKeyboardCountryCode:(id)arg1;
- (void)setTypeInterval:(double)arg1;
- (void)setTypistHWKeyboardQueue:(id)arg1;
- (double)typeInterval;
- (void)typeKeyStrokeStream:(id)arg1;
- (void)typeString:(id)arg1 completion:(id /* block */)arg2;

@end
