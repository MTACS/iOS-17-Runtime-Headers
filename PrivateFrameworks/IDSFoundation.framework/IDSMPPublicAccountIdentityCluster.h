
@interface IDSMPPublicAccountIdentityCluster : IDSMPIdentity

@property (nonatomic, readonly) IDSMPPublicAccountIdentity *publicAccountIdentity;

- (id)dataRepresentationWithError:(id*)arg1;
- (bool)isParentOfCluster:(id)arg1;
- (id)publicAccountIdentity;

@end
