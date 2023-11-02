
@interface UARPiCloudContainer : NSObject {
    CKContainer * _container;
    NSString * _containerID;
    CKDatabase * _database;
    CKServerChangeToken * _databaseChangeToken;
    id  _publicKey;
    NSMutableSet * _updatedRecords;
    NSMutableSet * _updatedZones;
    NSData * _verificationCertificate;
    NSDictionary * _verificationCertificates;
}

@property (readonly) CKContainer *container;
@property (readonly, copy) NSString *containerID;
@property (readonly) CKDatabase *database;
@property (copy) CKServerChangeToken *databaseChangeToken;
@property (retain) id publicKey;
@property (copy) NSMutableSet *updatedRecords;
@property (copy) NSMutableSet *updatedZones;
@property (copy) NSData *verificationCertificate;
@property (copy) NSDictionary *verificationCertificates;

- (void).cxx_destruct;
- (id)container;
- (id)containerID;
- (void)createContainerWithIdentifier:(id)arg1;
- (id)database;
- (id)databaseChangeToken;
- (id)initWithContainerID:(id)arg1;
- (bool)isCHIPContainer;
- (void)processVerificationCertificateRecord:(id)arg1;
- (id)publicKey;
- (bool)requiresPrefForSigningBeta;
- (void)setDatabaseChangeToken:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setUpdatedRecords:(id)arg1;
- (void)setUpdatedZones:(id)arg1;
- (void)setVerificationCertificate:(id)arg1;
- (void)setVerificationCertificates:(id)arg1;
- (id)updatedRecords;
- (id)updatedZones;
- (id)verificationCertificate;
- (id)verificationCertificates;

@end
