
@interface _DKWiFiConnectionMonitor : _DKMonitor <_DKHistoricalDeletingMonitor> {
    NSString * _currentSSID;
    CWFInterface * _interface;
    BMSource * _source;
    id /* block */  historicalDeletingHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ historicalDeletingHandler;
@property (readonly) Class superclass;

+ (id)entitlements;
+ (bool)writeToBiome;

- (void).cxx_destruct;
- (void)_handleKnownNetworkProfileChangedEvent:(id)arg1;
- (void)_handleWiFiEvent:(id)arg1;
- (void)_handleWiFiStateChangeEvent:(id)arg1;
- (id /* block */)historicalDeletingHandler;
- (void)setHistoricalDeletingHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;

@end
