
@interface HKCloudSyncRecordZoneIDDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _ownerName;
    NSString * _zoneName;
}

@property (nonatomic, readonly, copy) NSString *ownerName;
@property (nonatomic, readonly, copy) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)ownerName;
- (id)zoneName;

@end
