
@interface _UIPhysicalKeyTranslator : NSObject {
    struct __GSKeyboard { } * _keyboardRef;
}

@property (nonatomic, readonly) struct __GSKeyboard { }*keyboardRef;

- (int)HIDUsageCodeForCharacter:(unsigned short)arg1 modifiers:(long long)arg2;
- (void)dealloc;
- (id)initWithGSKeyboard:(struct __GSKeyboard { }*)arg1;
- (struct __GSKeyboard { }*)keyboardRef;
- (id)layoutName;
- (id)translationForHIDUsageCode:(unsigned short)arg1 modifiers:(long long)arg2;

@end
