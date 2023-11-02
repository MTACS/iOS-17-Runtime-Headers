
@interface HKSPSleepScheduleStateObject : NSObject <HKSPXPCObject> {
    unsigned long long  _scheduleState;
    <HKSPSyncAnchor> * _syncAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long scheduleState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKSPSyncAnchor> *syncAnchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheduleState:(unsigned long long)arg1 syncAnchor:(id)arg2;
- (id)objectWithSyncAnchor:(id)arg1;
- (unsigned long long)scheduleState;
- (id)syncAnchor;

@end
