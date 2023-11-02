
@interface HMAppleMediaAccessoryPowerAction : HMAction <NSCopying> {
    HMAccessory * _accessory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _targetSleepWakeState;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic) unsigned long long targetSleepWakeState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAccessory:(id)arg1 targetSleepWakeState:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (bool)isAffectedByEndEvents;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (void)setAccessory:(id)arg1;
- (void)setTargetSleepWakeState:(unsigned long long)arg1;
- (unsigned long long)targetSleepWakeState;
- (unsigned long long)type;
- (void)updateWithAction:(id)arg1 completionHandler:(id /* block */)arg2;

@end
