
@interface StoredMobileDocumentReaderApplicationInstallation : NSManagedObject

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) StoredMobileDocumentReaderAttestationCertificate *attestationCertificate;
@property (nonatomic, retain) NSSet *authenticationCertificates;
@property (nonatomic, copy) NSUUID *installationIdentifier;
@property (nonatomic, retain) NSSet *signingKeys;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
