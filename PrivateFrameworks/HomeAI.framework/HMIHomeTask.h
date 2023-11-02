
@interface HMIHomeTask : HMITask {
    NSUUID * _homeUUID;
}

@property (readonly) NSUUID *homeUUID;

- (void).cxx_destruct;
- (id)homeUUID;
- (id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 timeout:(double)arg3;

@end
