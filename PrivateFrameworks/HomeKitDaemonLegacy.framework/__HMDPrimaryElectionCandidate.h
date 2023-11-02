
@interface __HMDPrimaryElectionCandidate : NSObject <NSSecureCoding> {
    unsigned long long  _capabilities;
    unsigned long long  _connectionType;
    NSUUID * _currentPrimaryIdentifier;
    NSUUID * _deviceIdentifier;
    bool  _enabledAsResident;
    HMDHomeKitVersion * _homeKitVersion;
    NSString * _name;
    bool  _pcsEnabled;
    HMDResidentDevice * _residentDevice;
    HMFSoftwareVersion * _swVersion;
}

@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, readonly) unsigned long long connectionType;
@property (nonatomic, readonly, copy) NSUUID *currentPrimaryIdentifier;
@property (nonatomic, readonly, copy) NSUUID *deviceIdentifier;
@property (nonatomic, readonly) bool enabledAsResident;
@property (nonatomic, readonly, copy) HMDHomeKitVersion *homeKitVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool pcsEnabled;
@property (nonatomic, retain) HMDResidentDevice *residentDevice;
@property (nonatomic, readonly, copy) HMFSoftwareVersion *swVersion;

+ (id)fromMessagePayload:(id)arg1;
+ (unsigned long long)setSupportsPingRequest:(bool)arg1 capabilities:(unsigned long long)arg2;
+ (bool)supportsPingRequest:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (long long)compare:(id)arg1 currentPrimary:(id)arg2 outCriteria:(unsigned long long*)arg3;
- (unsigned long long)connectionType;
- (id)currentPrimaryIdentifier;
- (id)description;
- (id)deviceIdentifier;
- (bool)enabledAsResident;
- (void)encodeWithCoder:(id)arg1;
- (id)homeKitVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 deviceIdentifier:(id)arg2 name:(id)arg3 currentPrimaryIdentifier:(id)arg4 enabledAsResident:(bool)arg5 supportsPingRequest:(bool)arg6 connectionType:(unsigned long long)arg7 pcsEnabled:(bool)arg8 swVersion:(id)arg9;
- (id)name;
- (bool)pcsEnabled;
- (id)redactedDescription;
- (id)residentDevice;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setResidentDevice:(id)arg1;
- (bool)supportsPingRequest;
- (id)swVersion;
- (id)toMessagePayload;

@end
