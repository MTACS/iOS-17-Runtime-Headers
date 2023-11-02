
@interface _GEOURLManifestListenerCallbackWithQueue : NSObject <_GEOURLManifestListenerCallback> {
    id /* block */  _handler;
    unsigned int  _qos;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_voucher> * _voucher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (void)performHandler:(bool)arg1;

@end
