
@interface CKRecordZoneSubscription : CKSubscription <NSCopying, NSSecureCoding>

@property (copy) NSString *recordType;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setZoneID_modelMutation:(id)arg1;

@end
