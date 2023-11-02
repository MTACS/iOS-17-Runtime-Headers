
@interface DIEncryptionFrontend : NSObject <NSCoding, NSSecureCoding> {
    NSString * _CLIPassphrasePrompt;
    NSString * _CLIVerifyPassphrasePrompt;
    NSString * _GUIPassphraseLabel;
    NSString * _GUIPassphrasePrompt;
    NSString * _GUIVerifyPassphraseLabel;
    bool  _allowStoringInKeychain;
    DIBaseParams * _diParams;
    NSUUID * _encryptionUUID;
}

@property (nonatomic, readonly, copy) NSString *CLIPassphrasePrompt;
@property (nonatomic, readonly, copy) NSString *CLIVerifyPassphrasePrompt;
@property (nonatomic, readonly, copy) NSString *GUIPassphraseLabel;
@property (nonatomic, readonly, copy) NSString *GUIPassphrasePrompt;
@property (nonatomic, readonly, copy) NSString *GUIVerifyPassphraseLabel;
@property (nonatomic) bool allowStoringInKeychain;
@property (nonatomic, readonly) DIBaseParams *diParams;
@property (nonatomic, readonly, copy) NSUUID *encryptionUUID;
@property (nonatomic, readonly) unsigned long long flags;

+ (bool)hasGUIaccess;
+ (bool)supportsSecureCoding;
+ (bool)updateSystemKeychainAttrWithDict:(id)arg1 isStoring:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)CLIPassphrasePrompt;
- (id)CLIVerifyPassphrasePrompt;
- (bool)GUIAskForPassphraseWithError:(id*)arg1;
- (id)GUIPassphraseLabel;
- (id)GUIPassphrasePrompt;
- (id)GUIVerifyPassphraseLabel;
- (bool)allowStoringInKeychain;
- (bool)askPermissionWithRememberPassword:(bool*)arg1 error:(id*)arg2;
- (bool)checkWithHasIcloudKeychain:(bool*)arg1 error:(id*)arg2;
- (bool)consoleAskForPassphraseWithUseStdin:(bool)arg1 error:(id*)arg2;
- (id)diParams;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionUUID;
- (unsigned long long)flags;
- (id)getCertificateWithCertificatePath:(id)arg1 error:(id*)arg2;
- (id)getCertificateWithPublicKey:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)setAllowStoringInKeychain:(bool)arg1;
- (bool)storeInKeychainWithPassphrase:(id)arg1 forceSystemKeychain:(bool)arg2 error:(id*)arg3;
- (bool)updateDiskImageParamsWithFrontend:(id)arg1 error:(id*)arg2;
- (bool)validateDeserializationWithError:(id*)arg1;

@end
