
@interface HKSPSleepModeObject : NSObject <HKSPXPCObject> {
    long long  _sleepMode;
    <HKSPSyncAnchor> * _syncAnchor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sleepMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKSPSyncAnchor> *syncAnchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSleepMode:(long long)arg1 syncAnchor:(id)arg2;
- (id)objectWithSyncAnchor:(id)arg1;
- (long long)sleepMode;
- (id)syncAnchor;

@end
