
@interface TRIXPCStatusServiceListener : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface * _interface;
    TRIXPCServerContextPromise * _promise;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPromise:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
