
@interface HMDAccessoryReachabilityTuple : HMFObject {
    NSString * _accessoryUUID;
    bool  _currentReachability;
    unsigned long long  _currentSuspendedState;
    bool  _previouslySentReachability;
    unsigned long long  _previouslySentSuspendedState;
}

@property (nonatomic, retain) NSString *accessoryUUID;
@property (nonatomic) bool currentReachability;
@property (nonatomic) unsigned long long currentSuspendedState;
@property (nonatomic) bool previouslySentReachability;
@property (nonatomic) unsigned long long previouslySentSuspendedState;

+ (id)tupleWithAccessoryUUID:(id)arg1 reachable:(bool)arg2;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (bool)currentReachability;
- (unsigned long long)currentSuspendedState;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)previouslySentReachability;
- (unsigned long long)previouslySentSuspendedState;
- (void)setAccessoryUUID:(id)arg1;
- (void)setCurrentReachability:(bool)arg1;
- (void)setCurrentSuspendedState:(unsigned long long)arg1;
- (void)setPreviouslySentReachability:(bool)arg1;
- (void)setPreviouslySentSuspendedState:(unsigned long long)arg1;

@end
