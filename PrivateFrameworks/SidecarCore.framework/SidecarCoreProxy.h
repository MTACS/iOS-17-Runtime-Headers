
@interface SidecarCoreProxy : NSObject <SidecarCore_Interface> {
    <SidecarSessionDelegate> * _delegate;
    <SidecarServicePresenterDelegate> * _presenterDelegate;
}

@property (nonatomic, retain) <SidecarSessionDelegate> *delegate;
@property (nonatomic, retain) <SidecarServicePresenterDelegate> *presenterDelegate;

+ (id)defaultProxy;

- (void).cxx_destruct;
- (id)delegate;
- (id)presenterDelegate;
- (void)relayPresenterServiceExtensionReady:(id)arg1;
- (void)relayPresenterStartServiceExtension:(id)arg1 completion:(id /* block */)arg2;
- (void)relaySession:(long long)arg1 closedWithError:(id)arg2;
- (void)relaySession:(id)arg1 openedByDevice:(id)arg2 dataLink:(long long)arg3 service:(id)arg4;
- (void)relaySession:(long long)arg1 receivedOPACKData:(id)arg2 dataLink:(long long)arg3;
- (void)relaySession:(long long)arg1 stream:(id)arg2 status:(unsigned long long)arg3;
- (void)relayTerminateService;
- (void)setDelegate:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;

@end
