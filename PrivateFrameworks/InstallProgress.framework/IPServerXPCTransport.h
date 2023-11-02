
@interface IPServerXPCTransport : NSObject <NSXPCListenerDelegate> {
    NSMutableSet * _clients;
    <IPServerXPCTransportDelegate> * _delegate;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IPServerXPCTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) Class superclass;

+ (id)defaultXPCTransport;

- (void).cxx_destruct;
- (void)clientDisconnected:(id)arg1;
- (id)delegate;
- (void)disseminateProgressEndForIdenitty:(id)arg1 reason:(unsigned long long)arg2;
- (void)disseminateProgressUpdateForIdentity:(id)arg1 currentProgress:(id)arg2;
- (id)initWithListener:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (id)serviceQueue;
- (void)setDelegate:(id)arg1;

@end
