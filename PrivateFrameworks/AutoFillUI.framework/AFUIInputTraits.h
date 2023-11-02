
@interface AFUIInputTraits : NSObject <NSCopying> {
    bool  _displaySecureTextUsingPlainText;
    TITextInputTraits * _traits;
}

@property (nonatomic, readonly) unsigned long long autocorrectionType;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (nonatomic, readonly) unsigned long long keyboardType;
@property (nonatomic, readonly) unsigned long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic, readonly) bool secureTextEntry;
@property (nonatomic, readonly, copy) NSString *textContentType;
@property (nonatomic, readonly) TITextInputTraits *traits;

+ (id)_traitsWithObject:(id)arg1;
+ (id)_traitsWithRTITraits:(id)arg1;
+ (id)_traitsWithTITraits:(id)arg1;
+ (id)_traitsWithUITraits:(id)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)autocorrectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displaySecureTextUsingPlainText;
- (bool)isSecureTextEntry;
- (unsigned long long)keyboardType;
- (unsigned long long)returnKeyType;
- (void)setDisplaySecureTextUsingPlainText:(bool)arg1;
- (id)textContentType;
- (id)traits;

@end
