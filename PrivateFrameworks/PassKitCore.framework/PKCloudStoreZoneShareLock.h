
@interface PKCloudStoreZoneShareLock : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSDate * _creationDate;
    NSString * _originDeviceIdentifier;
    NSString * _originDeviceName;
    NSString * _zoneName;
}

@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *originDeviceIdentifier;
@property (nonatomic, readonly, copy) NSString *originDeviceName;
@property (nonatomic, readonly) NSString *zoneName;

+ (void)_deleteDeviceDataFromCloudStoreRecord:(id)arg1;
+ (void)deleteFromCloudStoreRecord:(id)arg1 codingType:(unsigned long long)arg2;
+ (id)recordNameForZoneName:(id)arg1;
+ (id)recordNamePrefix;
+ (bool)supportsSecureCoding;
+ (id)zoneNameFromRecordName:(id)arg1;

- (void).cxx_destruct;
- (void)_encodeDeviceDataForCloudStoreCoder:(id)arg1;
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneName:(id)arg1 creationDate:(id)arg2 originDeviceIdentifier:(id)arg3 originDeviceName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCloudStoreZoneShareLock:(id)arg1;
- (unsigned long long)itemType;
- (id)originDeviceIdentifier;
- (id)originDeviceName;
- (id)primaryIdentifier;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;
- (id)zoneName;

@end
