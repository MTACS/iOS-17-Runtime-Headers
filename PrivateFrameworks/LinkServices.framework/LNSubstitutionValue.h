
@interface LNSubstitutionValue : NSObject <NSSecureCoding> {
    LNStaticDeferredLocalizedString * _optionsCollectionTitle;
    NSUUID * _parameterIdentifier;
    NSString * _systemImageName;
    LNStaticDeferredLocalizedString * _title;
    NSString * _titleKey;
    LNValue * _value;
}

@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *optionsCollectionTitle;
@property (nonatomic, readonly, copy) NSUUID *parameterIdentifier;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;
@property (nonatomic, readonly, copy) NSString *titleKey;
@property (nonatomic, readonly, copy) LNValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterIdentifier:(id)arg1 title:(id)arg2 titleKey:(id)arg3 value:(id)arg4 optionsCollectionTitle:(id)arg5 systemImageName:(id)arg6;
- (id)optionsCollectionTitle;
- (id)parameterIdentifier;
- (id)systemImageName;
- (id)title;
- (id)titleKey;
- (id)value;

@end
