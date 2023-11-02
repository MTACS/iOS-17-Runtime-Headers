
@interface SYBacklinkIndicatorService : NSObject <NSXPCListenerDelegate, SYBacklinkIndicatorProtocol> {
    <SYBacklinkIndicatorServiceDelegate> * _delegate;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SYBacklinkIndicatorServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (bool)_forTesting;
+ (void)set_forTesting:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_listenerEndpoint;
- (void)dealloc;
- (id)delegate;
- (oneway void)hideIndicator;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (oneway void)showIndicatorForBacklinkWithDomainIdentifiers:(id)arg1 linkIdentifiers:(id)arg2 displayID:(unsigned int)arg3 corner:(long long)arg4 action:(long long)arg5;

@end
