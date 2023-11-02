
@interface SYBacklinkIndicatorUsageService : NSObject <NSXPCListenerDelegate, SYBacklinkIndicatorUsageProtocol> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (id)_listenerEndpoint;
+ (id)_testingDelegate;
+ (void)beginObservingUsage;
+ (void)set_testingDelegate:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (oneway void)didActivateBacklinkItemWithIdentifier:(id)arg1;
- (oneway void)didDismissBacklinkItemWithIdentifier:(id)arg1;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setListener:(id)arg1;

@end
