
@protocol _GEONetworkDefaultsServerProxy <NSObject>

@required

- (<_GEONetworkDefaultsServerProxyDelegate> *)delegate;
- (void)setDelegate:(id <_GEONetworkDefaultsServerProxyDelegate>)arg1;
- (void)updateNetworkDefaultsWithReason:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
