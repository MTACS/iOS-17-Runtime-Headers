
@interface ANAnnounceReachabilityServiceInterfaceDelegateProxy : NSObject <ANAnnounceReachabilityServiceInterfaceDelegate> {
    <ANAnnounceReachabilityServiceInterfaceDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANAnnounceReachabilityServiceInterfaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeName:(id)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeUUID:(id)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomName:(id)arg2 inHomeName:(id)arg3;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomUUID:(id)arg2 inHomeUUID:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
