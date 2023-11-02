
@interface ICCompatibilityControllerDevice : NSObject <NSSecureCoding> {
    long long  _maximumNotesVersion;
    NSString * _name;
    long long  _notesVersion;
}

@property (nonatomic) long long maximumNotesVersion;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long notesVersion;
@property (getter=isUpgradable, nonatomic, readonly) bool upgradable;
@property (getter=isUpgraded, nonatomic, readonly) bool upgraded;

+ (long long)maximumNotesVersionForHardwareInfo:(struct ICDeviceHardwareInfo { unsigned long long x1; long long x2; long long x3; })arg1;
+ (long long)notesVersionForDeviceInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMigrationDeviceInfo:(id)arg1;
- (id)initWithNotesVersion:(long long)arg1 maximumNotesVersion:(long long)arg2 name:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUpgradable;
- (bool)isUpgraded;
- (long long)maximumNotesVersion;
- (id)name;
- (long long)notesVersion;
- (void)setMaximumNotesVersion:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setNotesVersion:(long long)arg1;

@end
