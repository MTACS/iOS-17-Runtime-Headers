
@interface StoredMobileDocumentReaderSigningKey : NSManagedObject

@property (nonatomic, retain) StoredMobileDocumentReaderApplicationInstallation *applicationInstallation;
@property (nonatomic, retain) NSSet *attestationCertificates;
@property (nonatomic, retain) NSSet *authenticationCertificates;
@property (nonatomic, copy) NSData *keyBlob;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
