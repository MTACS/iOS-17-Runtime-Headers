
@interface _HKSPEmptySleepSchedule : HKSPSleepSchedule <HKSPXPCObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKSPSyncAnchor> *syncAnchor;

+ (bool)supportsSecureCoding;

- (bool)isEmptySleepSchedule;

@end
