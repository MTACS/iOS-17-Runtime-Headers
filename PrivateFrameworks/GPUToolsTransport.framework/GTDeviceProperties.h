
@interface GTDeviceProperties : NSObject <NSSecureCoding> {
    bool  _AppleInternal;
    NSString * _BuildVersion;
    NSString * _CPUArchitecture;
    NSString * _DeviceClass;
    bool  _DeviceSupportsLockdown;
    bool  _EffectiveProductionStatusAp;
    NSString * _HWModelStr;
    bool  _IsUIBuild;
    unsigned long long  _LocationID;
    NSString * _MobileDeviceMinimumVersion;
    bool  _OSInstallEnvironment;
    NSString * _OSVersion;
    NSString * _ProductName;
    NSString * _ProductType;
    NSString * _ReleaseType;
    unsigned long long  _RemoteXPCVersionFlags;
    bool  _StoreDemoMode;
    NSString * _UniqueDeviceID;
}

@property (nonatomic) bool appleInternal;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, copy) NSString *cpuArchitecture;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic) bool deviceSupportsLockdown;
@property (nonatomic) bool effectiveProductionStatusAp;
@property (nonatomic, copy) NSString *hardwareModel;
@property (nonatomic) bool isUIBuild;
@property (nonatomic) unsigned long long locationID;
@property (nonatomic, copy) NSString *mobileDeviceMinimumVersion;
@property (nonatomic) bool osInstallEnvironment;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, copy) NSString *releaseType;
@property (nonatomic) unsigned long long remoteXPCVersionFlags;
@property (nonatomic) bool storeDemoMode;
@property (nonatomic, copy) NSString *uniqueDeviceID;

+ (id)hardwareUUID;
+ (bool)supportsSecureCoding;
+ (id)uniqueDeviceID;

- (void).cxx_destruct;
- (bool)appleInternal;
- (id)buildVersion;
- (id)cpuArchitecture;
- (id)description;
- (id)deviceClass;
- (bool)deviceSupportsLockdown;
- (bool)effectiveProductionStatusAp;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareModel;
- (id)initForEmbeddedSystem;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCObject:(id)arg1;
- (bool)isUIBuild;
- (unsigned long long)locationID;
- (id)mobileDeviceMinimumVersion;
- (bool)osInstallEnvironment;
- (id)osVersion;
- (id)productName;
- (id)productType;
- (id)releaseType;
- (unsigned long long)remoteXPCVersionFlags;
- (void)setAppleInternal:(bool)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setCpuArchitecture:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceSupportsLockdown:(bool)arg1;
- (void)setEffectiveProductionStatusAp:(bool)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setIsUIBuild:(bool)arg1;
- (void)setLocationID:(unsigned long long)arg1;
- (void)setMobileDeviceMinimumVersion:(id)arg1;
- (void)setOsInstallEnvironment:(bool)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setReleaseType:(id)arg1;
- (void)setRemoteXPCVersionFlags:(unsigned long long)arg1;
- (void)setStoreDemoMode:(bool)arg1;
- (void)setUniqueDeviceID:(id)arg1;
- (bool)storeDemoMode;
- (id)uniqueDeviceID;

@end
