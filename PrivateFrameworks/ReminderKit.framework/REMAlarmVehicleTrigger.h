
@interface REMAlarmVehicleTrigger : REMAlarmTrigger {
    long long  _event;
}

@property (nonatomic) long long event;

+ (id)cdEntityName;
+ (bool)supportsSecureCoding;

- (id)_deepCopy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)event;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(long long)arg1;
- (id)initWithObjectID:(id)arg1 event:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTemporal;
- (void)setEvent:(long long)arg1;

@end
