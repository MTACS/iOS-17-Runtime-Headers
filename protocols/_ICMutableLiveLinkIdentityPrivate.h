
@protocol _ICMutableLiveLinkIdentityPrivate <ICMutableLiveLinkIdentity>

@required

- (NSUUID *)identifier;
- (long long)serverID;
- (void)setIdentifier:(NSUUID *)arg1;
- (void)setServerID:(long long)arg1;

@end
