
@interface StoredMobileDocumentReaderAttestationCertificate : NSManagedObject

@property (nonatomic, retain) StoredMobileDocumentReaderApplicationInstallation *applicationInstallation;
@property (nonatomic, copy) NSData *certificateData;
@property (nonatomic, retain) StoredMobileDocumentReaderSigningKey *signingKey;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
