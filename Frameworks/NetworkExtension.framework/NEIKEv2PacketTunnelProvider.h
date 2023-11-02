
@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider {
    bool  _authenticationPrompted;
    bool  _companionHasOutboundPath;
    NEIKEv2CompanionDatapath * _companionProxyDatapath;
    bool  _dispose;
    id /* block */  _dnsResolverCompletionHandler;
    unsigned int  _flags;
    NEUserNotification * _g_notification;
    NSObject<OS_dispatch_semaphore> * _getSocketSemaphore;
    bool  _hasNAT;
    unsigned long long  _ifIndex;
    NSArray * _ikeConfig;
    bool  _isIfCellular;
    bool  _isIfCompanion;
    bool  _isObserving;
    NSArray * _localTrafficSelectors;
    bool  _mobikeCapable;
    NEIKEv2MOBIKE * _mobikeHandle;
    NSDictionary * _options;
    NWPath * _path;
    long long  _pathStatus;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _randomLocalPortFallbackRetryCount;
    NEIKEv2Rekey * _rekey;
    NSArray * _remoteTrafficSelectors;
    NWResolver * _resolver;
    NSObject<OS_dispatch_source> * _resolverWaitTimer;
    NWPathEvaluator * _scopedPathEvaluator;
    NEIKEv2Server * _server;
    NEIKEv2Session * _session;
    bool  _sessionDidConnect;
    id /* block */  _startTunnelCompletionHandler;
    id /* block */  _stopTunnelCompletionHandler;
    long long  _tunnelKind;
    struct NEVirtualInterface_s { } * _virtualInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopTunnelWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)wake;

@end
