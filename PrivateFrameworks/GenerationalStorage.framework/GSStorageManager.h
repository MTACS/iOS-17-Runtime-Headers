
@interface GSStorageManager : NSObject

+ (bool)_isPermanentStorageSupportedForFD:(int)arg1 error:(id*)arg2;
+ (bool)_isPermanentStorageSupportedForStatFSInfo:(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16; unsigned int x17[7]; }*)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)manager;

- (void)_connectionWithDaemonWasLost;
- (id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id*)arg3;
- (bool)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id*)arg2;
- (bool)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id*)arg2;
- (bool)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id*)arg2;
- (bool)isPermanentStorageSupportedAtURL:(id)arg1 error:(id*)arg2;
- (bool)mayPermanentStorageBeSupportedAtURL:(id)arg1 error:(id*)arg2;
- (bool)mayPermanentStorageBeSupportedWithFD:(int)arg1 error:(id*)arg2;
- (id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(bool)arg2 error:(id*)arg3;
- (id)persistentIdentifierInStorage:(id)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3;
- (void)readImportCookieDataForVolumeAtURL:(id)arg1 handler:(id /* block */)arg2;
- (bool)removeAdditionsInNamespace:(id)arg1 underPath:(id)arg2 withMatchingPredicate:(id /* block */)arg3 errorPerAddition:(id*)arg4 error:(id*)arg5;
- (bool)removeTemporaryStorage:(id)arg1 error:(id*)arg2;
- (id)stagingPrefixForDocumentID:(id)arg1;
- (bool)storeImportCookieData:(id)arg1 forVolumeURL:(id)arg2 error:(id*)arg3;
- (id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id*)arg3;

@end
