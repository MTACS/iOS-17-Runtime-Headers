
@interface _WKPublicKeyCredentialUserEntity : _WKPublicKeyCredentialEntity {
    NSString * _displayName;
    NSData * _identifier;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSData *identifier;

- (void)dealloc;
- (id)displayName;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2 displayName:(id)arg3;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
