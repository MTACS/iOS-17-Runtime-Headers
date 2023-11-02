
@interface STSCredential : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _subIdentifier;
    unsigned char  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *subIdentifier;
@property (nonatomic, readonly) unsigned char type;

+ (id)credentialWithType:(unsigned char)arg1 identifier:(id)arg2 subIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)unifiedAccessCredentialWithAID:(id)arg1 publicKeyIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned char)arg1 identifier:(id)arg2 subIdentifier:(id)arg3;
- (id)subIdentifier;
- (unsigned char)type;

@end
