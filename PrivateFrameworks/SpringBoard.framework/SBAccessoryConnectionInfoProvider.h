
@interface SBAccessoryConnectionInfoProvider : NSObject <ACCConnectionInfoDelegateProtocol> {
    ACCConnectionInfo * _connectionInfo;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)accessoryConnectionType:(id)arg1;
- (void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(id)arg4 forConnection:(id)arg5;
- (void)accessoryEndpointDetached:(id)arg1 forConnection:(id)arg2;
- (void)accessoryEndpointInfoPropertyChanged:(id)arg1 properties:(id)arg2 forConnection:(id)arg3;
- (int)accessoryEndpointTransportType:(id)arg1 connection:(id)arg2;
- (void)accessoryInfoForEndpoint:(id)arg1 connection:(id)arg2 withReply:(id /* block */)arg3;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
