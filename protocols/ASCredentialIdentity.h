
@protocol ASCredentialIdentity <NSObject>

@required

- (long long)rank;
- (NSString *)recordIdentifier;
- (ASCredentialServiceIdentifier *)serviceIdentifier;
- (void)setRank:(long long)arg1;
- (NSString *)user;

@end
