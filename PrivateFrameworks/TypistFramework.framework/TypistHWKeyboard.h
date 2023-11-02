
@interface TypistHWKeyboard : NSObject {
    NSMutableDictionary * _characterToKeycodeMap;
    struct __GSKeyboard { } * _hardwareKeyboard;
    unsigned int  _hidKeyboardType;
    NSNumber * _keyboardCountryCode;
    NSNumber * _keyboardLanguage;
    NSDictionary * _modifierCharMap;
    double  _pressDuration;
    NSDictionary * _propertyDictionary;
    NSString * _propertyDictionaryString;
    double  _typeInterval;
    unsigned char  _usagePage;
}

@property (nonatomic, retain) NSMutableDictionary *characterToKeycodeMap;
@property (nonatomic) struct __GSKeyboard { }*hardwareKeyboard;
@property (nonatomic) unsigned int hidKeyboardType;
@property (nonatomic, retain) NSNumber *keyboardCountryCode;
@property (nonatomic, retain) NSNumber *keyboardLanguage;
@property (nonatomic, retain) NSDictionary *modifierCharMap;
@property (nonatomic) double pressDuration;
@property (nonatomic, retain) NSDictionary *propertyDictionary;
@property (nonatomic, retain) NSString *propertyDictionaryString;
@property (nonatomic) double typeInterval;
@property (nonatomic) unsigned char usagePage;

+ (unsigned char)_convertHIDKeyboardTypeToGSKeyboardType:(unsigned int)arg1;
+ (id)_convertKeyboardLanguageToHIDCountryCode:(long long)arg1;
+ (unsigned int)_convertKeyboardLanguageToHIDKeyboardType:(id)arg1;
+ (id)convertHIDCountryCodeToLanguage:(long long)arg1;
+ (id)keyboardLanguageValueMap;
+ (id)keyboardLayoutValueMap;

- (void).cxx_destruct;
- (id)_generateKeystrokeStream:(id)arg1 appendTypeInterval:(bool)arg2;
- (id)_getModifierMaskMap;
- (void)_insertCharacterForKeyCode:(unsigned short)arg1 logOutput:(id)arg2;
- (void)_insertKey:(unsigned short)arg1 logOutput:(id)arg2;
- (void)_insertStaticKeys;
- (void)_setupCharacterToKeycodeMap;
- (id)_subsequentKeyPressPairForCharacter:(id)arg1;
- (id)characterToKeycodeMap;
- (void)dealloc;
- (void)detach;
- (id)generateKeystrokeStream:(id)arg1;
- (unsigned int)getHIDKeyboardType;
- (id)getPropertyDictionaryString;
- (struct __GSKeyboard { }*)hardwareKeyboard;
- (unsigned int)hidKeyboardType;
- (id)initWithLanguage:(id)arg1;
- (id)keyboardCountryCode;
- (id)keyboardLanguage;
- (id)modifierCharMap;
- (void)pressAndHoldKeys:(id)arg1 forDuration:(double)arg2 withValidation:(id /* block */)arg3 after:(double)arg4;
- (double)pressDuration;
- (void)pressKeycode:(unsigned short)arg1;
- (id)pressKeycodes:(id)arg1;
- (id)propertyDictionary;
- (id)propertyDictionaryString;
- (void)setCharacterToKeycodeMap:(id)arg1;
- (void)setHardwareKeyboard:(struct __GSKeyboard { }*)arg1;
- (void)setHidKeyboardType:(unsigned int)arg1;
- (void)setKeyboardCountryCode:(id)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setModifierCharMap;
- (void)setModifierCharMap:(id)arg1;
- (void)setPressDuration:(double)arg1;
- (void)setPropertyDictionary:(id)arg1;
- (void)setPropertyDictionaryString:(id)arg1;
- (void)setTypeInterval:(double)arg1;
- (void)setUsagePage:(unsigned char)arg1;
- (double)typeInterval;
- (void)typeString:(id)arg1;
- (unsigned char)usagePage;
- (id)usagePairsForText:(id)arg1;

@end
