
@protocol _GEOCountryConfigurationServerProxy <NSObject>

@required

- (id)initWithDelegate:(id <_GEOCountryConfigurationServerProxyDelegate>)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)updateCountryCodeWithCallbackQueue:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
