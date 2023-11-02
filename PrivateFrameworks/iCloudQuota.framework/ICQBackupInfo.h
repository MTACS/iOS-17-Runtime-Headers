
@interface ICQBackupInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _deviceGroups;
    NSNumber * _noOfBackupDevices;
}

@property (nonatomic, retain) NSArray *deviceGroups;
@property (nonatomic, retain) NSNumber *noOfBackupDevices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceGroups;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)noOfBackupDevices;
- (void)setDeviceGroups:(id)arg1;
- (void)setNoOfBackupDevices:(id)arg1;

@end
