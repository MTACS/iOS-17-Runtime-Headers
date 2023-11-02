
@interface HearingMLHelperService : NSObject <HearingMLHelperServiceInterfaceProtocol> {
    <HearingMLHelperServiceDelegate> * _delegate;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HearingMLHelperServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (id)_serviceProxy;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)trainWithDetectorID:(id)arg1 hallucinatorPath:(id)arg2 pretrainedWeightsPath:(id)arg3 resultHandler:(id /* block */)arg4;
- (id)xpcConnection;

@end
