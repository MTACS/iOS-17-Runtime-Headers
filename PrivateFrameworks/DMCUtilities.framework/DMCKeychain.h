
@interface DMCKeychain : NSObject

+ (struct __CFDictionary { }*)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(bool)arg6 outError:(id*)arg7;
+ (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (id)copyCertificatesWithPersistentIDs:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (struct __SecIdentity { }*)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (void*)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(bool)arg6 enforcePersonalPersona:(bool)arg7 outError:(id*)arg8;
+ (id)dataFromString:(id)arg1;
+ (bool)deleteAttestationCertWithGroup:(id)arg1 label:(id)arg2;
+ (bool)deleteAttestationKeyWithGroup:(id)arg1 label:(id)arg2;
+ (bool)deleteAttestationMetadataWithGroup:(id)arg1 service:(id)arg2;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(bool)arg5 enforcePersonalPersona:(bool)arg6 group:(id)arg7;
+ (struct __SecCertificate { }*)retrieveAttestationCertWithGroup:(id)arg1 label:(id)arg2;
+ (struct __SecIdentity { }*)retrieveAttestationIdentityWithGroup:(id)arg1 label:(id)arg2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)retrieveAttestationKeyWithGroup:(id)arg1 label:(id)arg2;
+ (id)retrieveAttestationMetadataWithGroup:(id)arg1 service:(id)arg2;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(bool)arg4 enforcePersonalPersona:(bool)arg5;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(bool)arg8 sysBound:(bool)arg9 enforcePersonalPersona:(bool)arg10 outError:(id*)arg11;
+ (bool)storeAttestationCert:(struct __SecCertificate { }*)arg1 withGroup:(id)arg2 label:(id)arg3;
+ (bool)storeAttestationKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 withGroup:(id)arg2 label:(id)arg3;
+ (bool)storeAttestationMetadata:(id)arg1 withGroup:(id)arg2 service:(id)arg3;
+ (id)stringFromServiceData:(id)arg1;

@end
