
@interface BRCReachabilityObserver : NSObject <BRCReachabilityDelegate> {
    id /* block */  _networkReachabilityDidChangeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ networkReachabilityDidChangeHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)networkReachabilityChanged:(bool)arg1;
- (id /* block */)networkReachabilityDidChangeHandler;
- (void)setNetworkReachabilityDidChangeHandler:(id /* block */)arg1;
- (void)startObservingNetworkReachabilityChanges;
- (void)stopObservingNetworkReachabilityChanges;

@end
