
@interface CCSRemoteServiceConnection : NSObject <CCSRemoteServiceServerProtocol> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)arg1;
- (void)requestDisableModuleWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestEnableModuleWithIdentifier:(id)arg1 force:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setVisibility:(bool)arg1 forModuleWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
