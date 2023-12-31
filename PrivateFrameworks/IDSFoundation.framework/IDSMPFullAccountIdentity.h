
@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (nonatomic, readonly) NSData *publicName;

+ (id)fullAccountIdentityWithError:(id*)arg1;
+ (id)identityWithData:(id)arg1 error:(id*)arg2;

- (id)dataRepresentationWithError:(id*)arg1;
- (id)publicAccountIdentityWithError:(id*)arg1;
- (id)publicName;
- (id)rolledAccountIdenityWithError:(id*)arg1;
- (id)signData:(id)arg1 withError:(id*)arg2;

@end
