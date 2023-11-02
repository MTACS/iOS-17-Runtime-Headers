
@interface FindOrAddHomeUserResults : NSObject {
    MTRDoorLockClusterGetUserResponseParams * _existingUser;
    long long  _newUserSlot;
}

@property (retain) MTRDoorLockClusterGetUserResponseParams *existingUser;
@property long long newUserSlot;

- (void).cxx_destruct;
- (id)existingUser;
- (long long)newUserSlot;
- (void)setExistingUser:(id)arg1;
- (void)setNewUserSlot:(long long)arg1;

@end
