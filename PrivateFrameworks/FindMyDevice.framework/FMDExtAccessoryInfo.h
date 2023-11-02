
@interface FMDExtAccessoryInfo : NSObject <NSSecureCoding> {
    NSString * _accessoryIdentifier;
    NSString * _accessoryType;
    NSDictionary * _additionalInfo;
    NSString * _deviceDiscoveryId;
    NSString * _firmwareVersion;
    NSString * _name;
    NSDictionary * _serialNumbers;
}

@property (nonatomic, retain) NSString *accessoryIdentifier;
@property (nonatomic, retain) NSString *accessoryType;
@property (nonatomic, retain) NSDictionary *additionalInfo;
@property (nonatomic, retain) NSString *deviceDiscoveryId;
@property (nonatomic, retain) NSString *firmwareVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDictionary *serialNumbers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)accessoryType;
- (id)additionalInfo;
- (id)description;
- (id)deviceDiscoveryId;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)serialNumbers;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAccessoryType:(id)arg1;
- (void)setAdditionalInfo:(id)arg1;
- (void)setDeviceDiscoveryId:(id)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSerialNumbers:(id)arg1;

@end
