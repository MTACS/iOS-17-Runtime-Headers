
@interface SOSmartcardEntry : NSObject {
    NSDictionary * _attributes;
    NSString * _certName;
    struct __SecIdentity { } * _identity;
    NSString * _issuer;
    NSData * _persistientRef;
    NSString * _tokenID;
    NSString * _upn;
}

@property (retain) NSDictionary *attributes;
@property (retain) NSString *certName;
@property struct __SecIdentity { }*identity;
@property (retain) NSString *issuer;
@property (retain) NSData *persistientRef;
@property (retain) NSString *tokenID;
@property (retain) NSString *upn;

- (void).cxx_destruct;
- (id)attributes;
- (id)certName;
- (struct __SecIdentity { }*)identity;
- (id)issuer;
- (id)persistientRef;
- (void)setAttributes:(id)arg1;
- (void)setCertName:(id)arg1;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setIssuer:(id)arg1;
- (void)setPersistientRef:(id)arg1;
- (void)setTokenID:(id)arg1;
- (void)setUpn:(id)arg1;
- (id)tokenID;
- (id)upn;

@end
