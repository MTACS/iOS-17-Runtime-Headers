
@interface HomeUserSlotResults : NSObject {
    NSArray * _availableSlots;
    MTRDoorLockClusterGetUserResponseParams * _user;
}

@property (retain) NSArray *availableSlots;
@property (retain) MTRDoorLockClusterGetUserResponseParams *user;

- (void).cxx_destruct;
- (id)availableSlots;
- (void)setAvailableSlots:(id)arg1;
- (void)setUser:(id)arg1;
- (id)user;

@end
