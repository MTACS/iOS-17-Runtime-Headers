
@interface DIEncryptionCreator : DIEncryptionFrontend

+ (bool)supportsSecureCoding;

- (id)CLIPassphrasePrompt;
- (id)CLIVerifyPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)GUIPassphrasePrompt;
- (id)GUIVerifyPassphraseLabel;
- (bool)allowStoringInKeychain;
- (bool)createAndStoreInSystemKeychainWithAccount:(id)arg1 error:(id*)arg2;
- (bool)createWithXpcHandler:(id)arg1 error:(id*)arg2;

@end
