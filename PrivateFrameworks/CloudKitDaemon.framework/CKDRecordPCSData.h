
@interface CKDRecordPCSData : CKDPCSData <NSSecureCoding> {
    CKDChainPCSData * _chainPCSData;
    NSData * _chainParentPublicKeyID;
    CKEncryptedData * _encryptedPublicSharingKey;
    CKRecordID * _parentID;
    CKDRecordPCSData * _parentPCSData;
    CKRecordID * _recordID;
    NSString * _recordType;
    CKRecordID * _shareID;
    CKDSharePCSData * _sharePCSData;
    struct _OpaquePCSShareProtection { } * _signingPCS;
    CKRecordZoneID * _zoneID;
    CKDZonePCSData * _zonePCSData;
    NSData * _zoneishPublicKeyID;
}

@property (nonatomic, retain) CKDChainPCSData *chainPCSData;
@property (nonatomic, retain) NSData *chainParentPublicKeyID;
@property (nonatomic, retain) CKEncryptedData *encryptedPublicSharingKey;
@property (nonatomic, retain) CKRecordID *parentID;
@property (nonatomic, retain) CKDRecordPCSData *parentPCSData;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) NSString *recordType;
@property (nonatomic, retain) CKRecordID *shareID;
@property (nonatomic, retain) CKDSharePCSData *sharePCSData;
@property (nonatomic) struct _OpaquePCSShareProtection { }*signingPCS;
@property (nonatomic, retain) CKRecordZoneID *zoneID;
@property (nonatomic, retain) CKDZonePCSData *zonePCSData;
@property (nonatomic, retain) NSData *zoneishPublicKeyID;

+ (id)dataWithRecord:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)chainPCSData;
- (id)chainParentPublicKeyID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPublicSharingKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1 recordID:(id)arg2;
- (id)initWithRecord:(id)arg1;
- (id)itemID;
- (id)parentID;
- (id)parentPCSData;
- (id)recordID;
- (id)recordType;
- (void)setChainPCSData:(id)arg1;
- (void)setChainParentPublicKeyID:(id)arg1;
- (void)setEncryptedPublicSharingKey:(id)arg1;
- (void)setParentID:(id)arg1;
- (void)setParentPCSData:(id)arg1;
- (void)setPcs:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setSigningPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setZoneID:(id)arg1;
- (void)setZonePCSData:(id)arg1;
- (void)setZoneishPublicKeyID:(id)arg1;
- (id)shareID;
- (id)sharePCSData;
- (bool)shouldEncodePCSData;
- (struct _OpaquePCSShareProtection { }*)signingPCS;
- (id)zoneID;
- (id)zonePCSData;
- (id)zoneishPublicKeyID;

@end
