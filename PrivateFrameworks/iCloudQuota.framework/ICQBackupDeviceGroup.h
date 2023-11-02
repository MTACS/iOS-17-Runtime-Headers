
@interface ICQBackupDeviceGroup : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _backupDevices;
    NSString * _sectionFooter;
    NSString * _sectionHeader;
}

@property (nonatomic, retain) NSArray *backupDevices;
@property (nonatomic, copy) NSString *sectionFooter;
@property (nonatomic, copy) NSString *sectionHeader;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backupDevices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sectionFooter;
- (id)sectionHeader;
- (void)setBackupDevices:(id)arg1;
- (void)setSectionFooter:(id)arg1;
- (void)setSectionHeader:(id)arg1;

@end
