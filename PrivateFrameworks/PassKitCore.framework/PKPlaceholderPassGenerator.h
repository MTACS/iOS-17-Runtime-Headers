
@interface PKPlaceholderPassGenerator : NSObject {
    NSMutableDictionary * _passContent;
    NSURL * _templateDirectory;
    PKPass * _templatePass;
    id /* block */  _updateUrlsBlock;
}

@property (nonatomic, copy) NSArray *associatedApplicationIdentifiers;
@property (nonatomic, retain) NSMutableDictionary *passContent;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *serialNumber;

+ (id)addManifestIfNecessaryToPass:(id)arg1;
+ (id)manifestForDirectory:(id)arg1 error:(id*)arg2;
+ (id)manifestSignatureForDirectory:(id)arg1 passCertificate:(id)arg2 appleWWDRCertificate:(id)arg3 certificatePassword:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (void)_updatePassURLsConfigrationPassUrl:(id)arg1;
- (id)associatedApplicationIdentifiers;
- (id)generateAndSignPassWithPassCertificate:(id)arg1 appleWWDRCertificate:(id)arg2 certificatePassword:(id)arg3 error:(id*)arg4;
- (id)generatePass;
- (id)initWithPassTemplate:(id)arg1 error:(id*)arg2;
- (void)insertPassField:(id)arg1;
- (void)insertPaymentApplication:(id)arg1;
- (id)passContent;
- (id)passTypeIdentifier;
- (id)primaryAccountIdentifier;
- (id)serialNumber;
- (void)setAssociatedApplicationIdentifiers:(id)arg1;
- (void)setPassContent:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setUpdatePassRemoteAssetConfigrationsWithBlock:(id /* block */)arg1;
- (long long)updatePassUpgradeRequestsWithBlock:(id /* block */)arg1;
- (long long)updatePaymentApplicationsWithBlock:(id /* block */)arg1;

@end
