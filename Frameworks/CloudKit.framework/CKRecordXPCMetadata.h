
@interface CKRecordXPCMetadata : NSObject <NSSecureCoding> {
    NSArray * _allPCSKeyIDs;
    NSDate * _creationDate;
    NSString * _etag;
    NSDate * _expirationDate;
    NSDate * _modificationDate;
    NSData * _pcsKeyID;
    NSData * _protectionData;
    CKRecord * _serverRecord;
    NSData * _signingPCSIdentityData;
    NSData * _zoneishKeyID;
}

@property (nonatomic, copy) NSArray *allPCSKeyIDs;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *etag;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSData *pcsKeyID;
@property (nonatomic, copy) NSData *protectionData;
@property (nonatomic, copy) CKRecord *serverRecord;
@property (nonatomic, copy) NSData *signingPCSIdentityData;
@property (nonatomic, copy) NSData *zoneishKeyID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)allPCSKeyIDs;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)etag;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)modificationDate;
- (id)pcsKeyID;
- (id)protectionData;
- (id)serverRecord;
- (void)setAllPCSKeyIDs:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPcsKeyID:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setServerRecord:(id)arg1;
- (void)setSigningPCSIdentityData:(id)arg1;
- (void)setZoneishKeyID:(id)arg1;
- (id)signingPCSIdentityData;
- (id)zoneishKeyID;

@end
