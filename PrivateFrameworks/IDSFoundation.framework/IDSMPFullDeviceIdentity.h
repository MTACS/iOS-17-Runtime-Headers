
@interface IDSMPFullDeviceIdentity : IDSMPIdentity

+ (id)deviceIdentityFromDataRepresentation:(id)arg1 publicAdminServiceIdentity:(id)arg2 error:(id*)arg3;
+ (id)deviceIdentityWithFullAdminServiceIdentity:(id)arg1 error:(id*)arg2;

- (id)dataRepresentationWithError:(id*)arg1;
- (id)publicDeviceIdentityWithError:(id*)arg1;
- (bool)purgeFromKeychain:(id*)arg1;

@end
