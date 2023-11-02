
@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation {
    NSString * _localizedPasswordLabel;
    NSString * _password;
}

@property (copy) NSString *localizedPasswordLabel;
@property (copy) NSString *password;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)baseClassForUI;
- (void)encodeWithCoder:(id)arg1;
- (void)importOperation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedPasswordLabel;
- (id)password;
- (void)setLocalizedPasswordLabel:(id)arg1;
- (void)setPassword:(id)arg1;

@end
