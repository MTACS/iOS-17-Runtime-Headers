
@interface MCKeychain : NSObject

+ (struct __CFDictionary { }*)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(bool)arg6 outError:(id*)arg7;
+ (id)canonicalPersistentReferenceForItemWithPersistentReference:(id)arg1 inSystemKeychain:(bool)arg2;
+ (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1;
+ (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2;
+ (struct __SecCertificate { }*)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (id)copyCertificatesWithPersistentIDs:(id)arg1 useSystemKeychain:(bool)arg2;
+ (struct __SecIdentity { }*)copyIdentityWithPersistentID:(id)arg1;
+ (struct __SecIdentity { }*)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2;
+ (struct __SecIdentity { }*)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (void*)copyItemWithPersistentID:(id)arg1;
+ (void*)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2;
+ (void*)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(bool)arg6 enforcePersonalPersona:(bool)arg7 outError:(id*)arg8;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(bool)arg6 outError:(id*)arg7;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(bool)arg5 outError:(id*)arg6;
+ (bool)itemExistsInKeychain:(void*)arg1;
+ (bool)itemExistsInKeychain:(void*)arg1 useSystemKeychain:(bool)arg2;
+ (bool)itemExistsInKeychain:(void*)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(bool)arg5 enforcePersonalPersona:(bool)arg6 group:(id)arg7;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(bool)arg5 group:(id)arg6;
+ (void)removeItemWithPersistentID:(id)arg1;
+ (void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2;
+ (void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(bool)arg2 enforcePersonalPersona:(bool)arg3;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(bool)arg4;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(bool)arg4 accessibility:(struct __CFString { }*)arg5;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(bool)arg4 enforcePersonalPersona:(bool)arg5;
+ (id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(bool)arg4 enforcePersonalPersona:(bool)arg5 accessibility:(struct __CFString { }*)arg6;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 outError:(id*)arg8;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(bool)arg8 sysBound:(bool)arg9 enforcePersonalPersona:(bool)arg10 outError:(id*)arg11;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(bool)arg8 sysBound:(bool)arg9 outError:(id*)arg10;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 outError:(id*)arg7;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 useSystemKeychain:(bool)arg7 outError:(id*)arg8;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6;
+ (bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(bool)arg6 outError:(id*)arg7;
+ (bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 outError:(id*)arg8;
+ (bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(bool)arg8 sysBound:(bool)arg9 outError:(id*)arg10;
+ (bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 outError:(id*)arg7;
+ (bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 useSystemKeychain:(bool)arg7 outError:(id*)arg8;
+ (bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6;
+ (bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(bool)arg6 outError:(id*)arg7;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(bool)arg6 outError:(id*)arg7;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(bool)arg5 outError:(id*)arg6;

@end
