
@interface DIDevice : NSObject <NSSecureCoding> {
    DIXPCConnectionManager * _connectionManager;
    <DIDeviceDelegate> * _delegate;
    NSUUID * _homeKitHomeIdentifier;
    NSUUID * _homeKitIdentifier;
    NSUUID * _idsIdentifier;
    bool  _isCurrentDevice;
    NSRecursiveLock * _lock;
    NSString * _name;
    long long  _state;
    NSDate * _stateExpiration;
    NSString * _stateReason;
    DIDeviceStateUpdateThrottler * _stateUpdateThrottler;
    DIOneshotTimer * _timer;
}

@property (nonatomic) DIXPCConnectionManager *connectionManager;
@property (nonatomic) <DIDeviceDelegate> *delegate;
@property (nonatomic, copy) NSUUID *homeKitHomeIdentifier;
@property (nonatomic, copy) NSUUID *homeKitIdentifier;
@property (nonatomic, copy) NSUUID *idsIdentifier;
@property (nonatomic) bool isCurrentDevice;
@property (readonly) NSRecursiveLock *lock;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSDate *stateExpiration;
@property (nonatomic, copy) NSString *stateReason;
@property (nonatomic, readonly) DIDeviceStateUpdateThrottler *stateUpdateThrottler;
@property (retain) DIOneshotTimer *timer;

+ (id)stringForDeviceState:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectionManager;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeKitHomeIdentifier;
- (id)homeKitIdentifier;
- (id)idsIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;
- (id)lock;
- (id)name;
- (void)notifyDeviceDidChange;
- (void)notifyDidUpdateState;
- (void)refreshStateWithCompletionHandler:(id /* block */)arg1;
- (void)setConnectionManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeKitHomeIdentifier:(id)arg1;
- (void)setHomeKitIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setIsCurrentDevice:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateExpiration:(id)arg1;
- (void)setStateReason:(id)arg1;
- (void)setTimer:(id)arg1;
- (long long)state;
- (id)stateExpiration;
- (id)stateReason;
- (id)stateUpdateThrottler;
- (id)timer;
- (void)updateState:(long long)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateWithDevice:(id)arg1 updateState:(bool)arg2;

@end
