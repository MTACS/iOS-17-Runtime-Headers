
@interface CKRepairZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _zoneIDs;
}

@property (nonatomic, retain) NSArray *zoneIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)zoneIDs;

@end
