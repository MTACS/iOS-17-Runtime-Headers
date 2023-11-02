
@interface ANAnnounceReachability : NSObject <ANAnnounceReachabilityServiceInterfaceDelegate> {
    NSXPCConnection * _connection;
    <ANAnnounceReachabilityDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANAnnounceReachabilityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)stringForAnnounceReachabilityLevel:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_start;
- (unsigned long long)announceReachabilityForHomeName:(id)arg1;
- (unsigned long long)announceReachabilityForHomeUUID:(id)arg1;
- (unsigned long long)announceReachabilityForRoomName:(id)arg1 inHomeName:(id)arg2;
- (unsigned long long)announceReachabilityForRoomUUID:(id)arg1 inHomeUUID:(id)arg2;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (id)log;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeName:(id)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForHomeUUID:(id)arg2;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomName:(id)arg2 inHomeName:(id)arg3;
- (void)reachabilityLevel:(unsigned long long)arg1 didChangeForRoomUUID:(id)arg2 inHomeUUID:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
