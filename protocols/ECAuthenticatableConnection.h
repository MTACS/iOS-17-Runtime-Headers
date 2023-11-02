
@protocol ECAuthenticatableConnection <NSObject>

@required

- (NSArray *)authenticationMechanisms;
- (bool)loginDisabled;
- (NSString *)securityProtocol;

@end
