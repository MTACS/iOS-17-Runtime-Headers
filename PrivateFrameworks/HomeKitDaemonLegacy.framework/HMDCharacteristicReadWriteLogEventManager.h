
@interface HMDCharacteristicReadWriteLogEventManager : NSObject {
    NSMutableDictionary * _consecutiveFailureCountByHMDAccessoryUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _timeOfFirstFailureByHMDAccessoryUUID;
}

@property (nonatomic, readonly) NSMutableDictionary *consecutiveFailureCountByHMDAccessoryUUID;
@property (nonatomic, readonly) NSMutableDictionary *timeOfFirstFailureByHMDAccessoryUUID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)consecutiveFailureCountByHMDAccessoryUUID;
- (unsigned long long)consecutiveFailureCountForAccessoryUUID:(id)arg1;
- (void)handleSubmittedErrorCode:(long long)arg1 forAccessoryUUID:(id)arg2;
- (id)init;
- (double)timeIntervalSinceFirstFailureForAccessoryUUID:(id)arg1;
- (id)timeOfFirstFailureByHMDAccessoryUUID;

@end
