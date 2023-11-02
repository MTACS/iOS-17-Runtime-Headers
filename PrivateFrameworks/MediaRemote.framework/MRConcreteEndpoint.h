
@interface MRConcreteEndpoint : MRAVEndpoint {
    long long  _connectionType;
    MRAVOutputDevice * _designatedGroupLeader;
    MRExternalDevice * _externalDevice;
    NSArray * _outputDevices;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSArray *outputDevices;

- (void).cxx_destruct;
- (bool)canModifyGroupMembership;
- (long long)connectionType;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 preferredSuffix:(id)arg3;
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 preferredSuffix:(id)arg3 connectionType:(long long)arg4;
- (bool)isProxyGroupPlayer;
- (id)outputDevices;
- (void)setExternalDevice:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (id)uniqueIdentifier;

@end
