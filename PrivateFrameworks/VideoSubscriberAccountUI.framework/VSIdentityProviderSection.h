
@interface VSIdentityProviderSection : NSObject {
    NSArray * _identityProviders;
}

@property (nonatomic, copy) NSArray *identityProviders;

- (void).cxx_destruct;
- (id)identityProviders;
- (id)init;
- (void)setIdentityProviders:(id)arg1;

@end
