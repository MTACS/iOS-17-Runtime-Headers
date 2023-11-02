
@interface ACXApplicationStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _architectureCompatibility;
    unsigned long long  _installStatus;
    NSError * _lastInstallationError;
    NSString * _uniqueInstallID;
    long long  _watchKitCompatibility;
}

@property (nonatomic) unsigned long long architectureCompatibility;
@property (nonatomic) unsigned long long installStatus;
@property (nonatomic, retain) NSError *lastInstallationError;
@property (nonatomic, copy) NSString *uniqueInstallID;
@property (nonatomic) long long watchKitCompatibility;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)architectureCompatibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installStatus;
- (id)lastInstallationError;
- (void)setArchitectureCompatibility:(unsigned long long)arg1;
- (void)setInstallStatus:(unsigned long long)arg1;
- (void)setInstallStatusWithGizmoStatus:(unsigned long long)arg1;
- (void)setLastInstallationError:(id)arg1;
- (void)setUniqueInstallID:(id)arg1;
- (void)setWatchKitCompatibility:(long long)arg1;
- (id)uniqueInstallID;
- (long long)watchKitCompatibility;

@end
