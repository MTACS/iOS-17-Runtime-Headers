
@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy> {
    int  _configChangedToken;
    <_GEONetworkDefaultsServerProxyDelegate> * _delegate;
    geo_isolater * _isolation;
    NSMutableArray * _updateCompletionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_GEONetworkDefaultsServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_networkDefaultsDidChange;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateNetworkDefaults:(id /* block */)arg1;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;

@end
