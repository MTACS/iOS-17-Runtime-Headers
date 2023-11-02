
@interface DIEncryptionUnlocker : DIEncryptionFrontend

+ (bool)supportsSecureCoding;

- (id)CLIPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)GUIPassphrasePrompt;
- (bool)keychainUnlockWithError:(id*)arg1;
- (bool)keychainUnlockWithIsSystemKeychain:(bool)arg1 error:(id*)arg2;
- (bool)lookupLegacyKeychainWithXpcHandler:(id)arg1 error:(id*)arg2;
- (bool)tryUnlockUsingSaksWithHasSaksKey:(bool*)arg1 error:(id*)arg2;
- (bool)unlockWithXpcHandler:(id)arg1 error:(id*)arg2;

@end
