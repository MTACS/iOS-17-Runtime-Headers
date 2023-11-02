
@interface _LSInstallationService : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (void)beginListening;

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)serialQueue;

@end
