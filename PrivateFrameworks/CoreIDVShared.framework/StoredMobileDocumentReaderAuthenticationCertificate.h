
@interface StoredMobileDocumentReaderAuthenticationCertificate : NSManagedObject

@property (nonatomic, retain) StoredMobileDocumentReaderApplicationInstallation *applicationInstallation;
@property (nonatomic, copy) NSArray *certificateChain;
@property (nonatomic, copy) NSData *merchantLogo;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) StoredMobileDocumentReaderSigningKey *signingKey;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
