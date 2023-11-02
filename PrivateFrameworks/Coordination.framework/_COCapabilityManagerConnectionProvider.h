
@interface _COCapabilityManagerConnectionProvider : NSObject <COCapabilityManagerConnectionProvider> {
    NSXPCConnection * _capabilityManagerServiceConnection;
}

@property (nonatomic, readonly) NSXPCConnection *capabilityManagerServiceConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)capabilityManagerServiceConnection;

@end
