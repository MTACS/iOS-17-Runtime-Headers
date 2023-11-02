
@interface HKHeartbeatSeriesQuery : HKQuery <HKHeartbeatSeriesQueryClientInterface> {
    id /* block */  _bufferHandler;
    HKHeartbeatSeriesSample * _heartbeatSeries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;

- (void).cxx_destruct;
- (void)_enumerateHeartbeatData:(id)arg1 final:(bool)arg2 handler:(id /* block */)arg3;
- (void)client_deliverHeartbeats;
- (id)initWithHeartbeatSeries:(id)arg1 bufferHandler:(id /* block */)arg2;
- (id)initWithHeartbeatSeries:(id)arg1 dataHandler:(id /* block */)arg2;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;

@end
