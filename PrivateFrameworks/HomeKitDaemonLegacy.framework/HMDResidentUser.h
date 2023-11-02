
@interface HMDResidentUser : HMDUser {
    unsigned long long  _configurationState;
    HMDDevice * _device;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _residentUserLock;
}

@property (getter=isBlocked, readonly) bool blocked;
@property unsigned long long configurationState;
@property (readonly) HMDDevice *device;
@property (readonly, copy) NSString *deviceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)configurationState;
- (void)configureWithHome:(id)arg1;
- (id)device;
- (id)deviceIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4;
- (id)initWithModelObject:(id)arg1;
- (bool)isBlocked;
- (id)legacyUser;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (bool)refreshDisplayName;
- (void)registerIdentity;
- (bool)requiresMakoSupport;
- (void)setConfigurationState:(unsigned long long)arg1;
- (void)setDevice:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (bool)updateWithDevice:(id)arg1;
- (id)userID;

@end
