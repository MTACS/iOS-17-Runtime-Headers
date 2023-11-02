
@interface LNVocabulary : NSObject <NSSecureCoding> {
    NSString * _term;
    NSDictionary * _traits;
}

@property (nonatomic, readonly, copy) NSString *term;
@property (nonatomic, readonly, copy) NSDictionary *traits;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTerm:(id)arg1 appSettingName:(id)arg2;
- (id)initWithTerm:(id)arg1 entityIdentifier:(id)arg2;
- (id)initWithTerm:(id)arg1 entityTypeName:(id)arg2;
- (id)initWithTerm:(id)arg1 traits:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)term;
- (id)traits;

@end
