
@interface MKBKeyStoreDevice : NSObject

+ (id)sharedService;

- (int)ChangeSystemSecretWithEscrow:(id)arg1 FromOldPasscode:(id)arg2 ToNew:(id)arg3 withOpaqueDats:(id)arg4 withKeepState:(int)arg5;
- (int)Event:(int)arg1;
- (int)SeshatDebug:(int)arg1;
- (int)SeshatEnroll:(id)arg1;
- (int)SeshatRecover:(id)arg1;
- (int)SeshatUnlock:(id)arg1 withMemento:(bool)arg2;
- (int)SetSystemSecretBlob:(id)arg1;
- (id)_CreateMKBServerConnection;
- (int)addPersonaKeyForUserSession:(unsigned int)arg1 withSecret:(id)arg2 withPersonaUUIDString:(id)arg3 forPath:(id)arg4;
- (int)backupUUIDForVolume:(id)arg1 bagUUID:(id*)arg2;
- (int)changeClassKeysGenerationWithSecret:(id)arg1 withGenerationOption:(int)arg2;
- (int)changeSystemSecretFromOldPasscode:(id)arg1 ToNew:(id)arg2 withOpaqueData:(id)arg3 withParams:(unsigned int)arg4;
- (id)copySytemSecretBlob;
- (int)createKeybagForUserSession:(id)arg1 withSessionUID:(int)arg2 WithSecret:(id)arg3 withGracePeriod:(int)arg4 withOpaqeStuff:(id)arg5;
- (int)createSyncBagForUserSession:(id)arg1 withSessionUID:(int)arg2;
- (int)deleteKeybagForUserSession:(int)arg1;
- (int)disableBackupForVolume:(id)arg1;
- (int)enableBackupForVolume:(id)arg1 withSecret:(id)arg2 bagData:(id*)arg3;
- (id)getBackupkeyForVolume:(id)arg1 andCryptoID:(unsigned long long)arg2 withreturnValue:(int*)arg3;
- (bool)getDeviceLockStateForUser:(int)arg1 extendedState:(bool)arg2 withLockStateInfo:(int*)arg3;
- (id)getFileHandleForData:(id)arg1;
- (id)getLockStateForUser:(int)arg1;
- (int)isKeyRollingWithKeyStatus:(int*)arg1;
- (int)loadKeybagForUserSession:(id)arg1 withSessionID:(int)arg2 withSecret:(id)arg3 shouldSetGracePeriod:(bool)arg4 withGracePeriod:(int)arg5 isInEarlyStar:(bool)arg6;
- (int)loadSyncBagForUserSession:(id)arg1 withSessionUID:(int)arg2;
- (int)migrateFS;
- (int)passcodeUnlockFailed;
- (int)passcodeUnlockStart;
- (int)passcodeUnlockSuccess;
- (int)registerOTABackup:(id)arg1 withSecret:(id)arg2;
- (int)removePersonaKeyForUserSession:(unsigned int)arg1 withPersonaUUIDString:(id)arg2 withVolumeUUIDString:(id)arg3;
- (int)removeSyncBagForUserSession:(id)arg1 withSessionUID:(int)arg2;
- (int)setSpacedRepetitionMode:(unsigned int)arg1;
- (int)setVolumeToPersona:(id)arg1 withPersonaString:(id)arg2;
- (int)startBackupSessionForVolume:(id)arg1;
- (int)stashCommit:(unsigned int)arg1 WithFlags:(unsigned int)arg2;
- (int)stashCreateWithSecret:(id)arg1 withMode:(int)arg2 withUID:(unsigned int)arg3 WithFlags:(unsigned int)arg4;
- (int)stashDestroy;
- (int)stashVerifywithValidity:(int*)arg1 WithUID:(unsigned int)arg2 WithFlags:(unsigned int)arg3;
- (int)stopBackupSessionForVolume:(id)arg1;
- (int)unloadKeybagForUserSession:(int)arg1;
- (int)unloadSyncBagForUserSession:(id)arg1 withSessionUID:(int)arg2;
- (int)verifySyncBagForUserSession:(id)arg1 withSessionUID:(int)arg2;

@end
