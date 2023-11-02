
@interface CKDZonePCSData : CKDPCSData <NSCopying, NSSecureCoding> {
    CKRecordID * _shareID;
    CKDSharePCSData * _sharePCSData;
    CKRecordZoneID * _zoneID;
    NSDate * _zonePCSModificationDate;
    struct _OpaquePCSShareProtection { } * _zoneishPCS;
    NSData * _zoneishPCSData;
    NSData * _zoneishPublicKeyID;
}

@property (nonatomic, retain) CKRecordID *shareID;
@property (nonatomic, retain) CKDSharePCSData *sharePCSData;
@property (nonatomic, retain) CKRecordZoneID *zoneID;
@property (nonatomic, retain) NSDate *zonePCSModificationDate;
@property (nonatomic) struct _OpaquePCSShareProtection { }*zoneishPCS;
@property (nonatomic, copy) NSData *zoneishPCSData;
@property (nonatomic, retain) NSData *zoneishPublicKeyID;

+ (id)dataWithZone:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZone:(id)arg1;
- (id)itemID;
- (void)setShareID:(id)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setZoneID:(id)arg1;
- (void)setZonePCSModificationDate:(id)arg1;
- (void)setZoneishPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setZoneishPCSData:(id)arg1;
- (void)setZoneishPublicKeyID:(id)arg1;
- (id)shareID;
- (id)sharePCSData;
- (id)zoneID;
- (id)zonePCSModificationDate;
- (struct _OpaquePCSShareProtection { }*)zoneishPCS;
- (id)zoneishPCSData;
- (id)zoneishPublicKeyID;

@end
