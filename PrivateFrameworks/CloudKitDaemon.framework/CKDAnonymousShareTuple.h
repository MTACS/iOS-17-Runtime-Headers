
@interface CKDAnonymousShareTuple : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    NSString * _ckAnonymousShareHashIdentifier;
    CKRecordID * _shareID;
    CKRecordZoneID * _zoneID;
}

@property (copy) NSString *ckAnonymousShareHashIdentifier;
@property (nonatomic, readonly, copy) CKRecordID *shareID;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ckAnonymousShareHashIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1 shareID:(id)arg2;
- (void)setCkAnonymousShareHashIdentifier:(id)arg1;
- (id)shareID;
- (id)zoneID;

@end
