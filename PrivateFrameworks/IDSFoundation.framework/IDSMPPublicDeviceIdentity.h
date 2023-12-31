
@interface IDSMPPublicDeviceIdentity : IDSMPIdentity

+ (id)deviceIdentityFromDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)deviceIdentityFromDataRepresentation:(id)arg1 publicAdminServiceIdentity:(id)arg2 error:(id*)arg3;

- (id)dataRepresentationWithError:(id*)arg1;

@end
