
@interface LNAppShortcutSpanData : NSObject <NSSecureCoding> {
    NSString * _parameterTypeIdentifier;
    LNStaticDeferredLocalizedString * _propertyTitle;
    NSString * _propertyTitleKey;
    NSString * _providerClassName;
    NSArray * _synonyms;
    LNValue * _value;
}

@property (nonatomic, readonly, copy) NSString *parameterTypeIdentifier;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *propertyTitle;
@property (nonatomic, readonly, copy) NSString *propertyTitleKey;
@property (nonatomic, readonly, copy) NSString *providerClassName;
@property (nonatomic, readonly, copy) NSArray *synonyms;
@property (nonatomic, readonly, copy) LNValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 propertyTitle:(id)arg2 propertyTitleKey:(id)arg3 providerClassName:(id)arg4 parameterTypeIdentifier:(id)arg5 synonyms:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)parameterTypeIdentifier;
- (id)propertyTitle;
- (id)propertyTitleKey;
- (id)providerClassName;
- (id)synonyms;
- (id)value;

@end
