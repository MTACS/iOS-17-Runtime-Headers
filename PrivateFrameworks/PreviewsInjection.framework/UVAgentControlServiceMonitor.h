
@interface UVAgentControlServiceMonitor : NSObject <BSServiceConnectionEndpointMonitorDelegate> {
    _TtC17PreviewsInjection14UVControlAgent * _agent;
    BSServiceConnectionEndpointMonitor * _endpointMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)load;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2;
- (void)monitor:(id)arg1 willLoseEndpoint:(id)arg2;

@end
