
@interface HMDResidentSyncCodingContext : NSObject {
    NSSet * _relevantBulletinRegistrations;
    NSSet * _relevantTriggers;
    HMDDeviceAddress * _targetDeviceAddress;
    bool  _targetIsResident;
    _MKFUser * _targetUser;
}

@property (nonatomic, readonly) HMDDeviceAddress *targetDeviceAddress;
@property (nonatomic, readonly) bool targetIsResident;
@property (nonatomic, readonly) _MKFUser *targetUser;

- (void).cxx_destruct;
- (id)initWithTargetUser:(id)arg1 targetIsResident:(bool)arg2 targetDeviceAddress:(id)arg3;
- (id)targetDeviceAddress;
- (bool)targetIsResident;
- (id)targetUser;

@end
