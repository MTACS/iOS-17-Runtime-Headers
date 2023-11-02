
@interface DIClient2Controller_XPCHandler : DIBaseXPCHandler

- (bool)GUIAskForPassphraseWithEncryptionFrontend:(id)arg1 error:(id*)arg2;
- (bool)connectWithError:(id*)arg1;
- (bool)createAndStoreInSystemKeychainWithCreator:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (bool)keychainUnlockWithEncryptionUnlocker:(id)arg1 error:(id*)arg2;
- (id)newAttachWithParams:(id)arg1 error:(id*)arg2;
- (id)remoteObjectInterface;
- (id)serviceName;

@end
