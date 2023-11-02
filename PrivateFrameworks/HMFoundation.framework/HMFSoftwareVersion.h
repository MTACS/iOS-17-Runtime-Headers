
@interface HMFSoftwareVersion : HMFVersion {
    NSString * _buildVersion;
}

@property (readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly) bool hf_canProvideWifiStrength;
@property (nonatomic, readonly) bool hf_canSupportCoordination;
@property (nonatomic, readonly) bool hf_softwareUpdateWouldSupportHomePodPairing;
@property (readonly, copy) NSString *shortVersionString;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (bool)supportsSecureCoding;
+ (id)versionFromOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1;

- (void).cxx_destruct;
- (id)buildVersion;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4;
- (id)initWithVersionString:(id)arg1;
- (id)localizedDescription;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)shortVersionString;
- (id)versionString;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_canProvideWifiStrength;
- (bool)hf_canSupportCoordination;
- (bool)hf_softwareUpdateWouldSupportHomePodPairing;

@end
