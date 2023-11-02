
@interface BLSHDiagnosticsServer : NSObject <BSServiceConnectionListenerDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <BLSFlipbookDiagnosticsProviding> * _flipbookDiagnosticsProvider;
    BSServiceConnectionListener * _serviceListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)domainSpecification;
+ (id)serverWithFlipbookDiagnosticsProvider:(id)arg1;

- (void).cxx_destruct;
- (id)initWithFlipbookDiagnosticsProvider:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
