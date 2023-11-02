
@interface WiFiP2PAWDLStateMonitor : NSObject <WiFiP2PAWDLStateMonitorXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    id /* block */  _channelSequenceUpdatedEventHandler;
    NSMutableArray * _interestedUniqueIdentifiers;
    id /* block */  _lowLatencyStatisticsUpdatedHandler;
    id /* block */  _realtimeModeUpdatedHandler;
    id /* block */  _serviceAvailabilityUpdatedHandler;
    id /* block */  _softAPChannelChangedEventHandler;
    id /* block */  _stateUpdatedHandler;
    id /* block */  _statisticsUpdatedHandler;
    id /* block */  _threadCoexistenceEventHandler;
    WiFiP2PXPCConnection * _xpcConnection;
}

@property (nonatomic, copy) id /* block */ channelSequenceUpdatedEventHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ lowLatencyStatisticsUpdatedHandler;
@property (nonatomic, copy) id /* block */ realtimeModeUpdatedHandler;
@property (nonatomic, copy) id /* block */ serviceAvailabilityUpdatedHandler;
@property (nonatomic, copy) id /* block */ softAPChannelChangedEventHandler;
@property (nonatomic, copy) id /* block */ stateUpdatedHandler;
@property (nonatomic, copy) id /* block */ statisticsUpdatedHandler;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ threadCoexistenceEventHandler;

- (void).cxx_destruct;
- (void)availabilityUpdatedForService:(id)arg1 error:(id)arg2;
- (void)beginMonitoring;
- (void)channelSequenceChangedEvent:(id)arg1;
- (id /* block */)channelSequenceUpdatedEventHandler;
- (id)copyActiveServiceUniqueIdentifiers;
- (id)copyLowLatencyStatistics;
- (id)copySidecarStatistics;
- (id)copyStatistics;
- (void)endMonitoring;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (id)lowLatencyStatisticsDifferenceBetweenPrevious:(id)arg1 current:(id)arg2;
- (id /* block */)lowLatencyStatisticsUpdatedHandler;
- (int)queryAverageRSSIForPeer:(id)arg1;
- (id)queryPeerDatabase;
- (id /* block */)realtimeModeUpdatedHandler;
- (void)registerAvailabilityUpdatesForService:(id)arg1;
- (id /* block */)serviceAvailabilityUpdatedHandler;
- (void)setChannelSequenceUpdatedEventHandler:(id /* block */)arg1;
- (void)setLowLatencyStatisticsUpdatedHandler:(id /* block */)arg1;
- (void)setRealtimeModeUpdatedHandler:(id /* block */)arg1;
- (void)setServiceAvailabilityUpdatedHandler:(id /* block */)arg1;
- (void)setSoftAPChannelChangedEventHandler:(id /* block */)arg1;
- (void)setStateUpdatedHandler:(id /* block */)arg1;
- (void)setStatisticsUpdatedHandler:(id /* block */)arg1;
- (void)setThreadCoexistenceEventHandler:(id /* block */)arg1;
- (void)softAPChannelChangedEvent:(bool)arg1 channelNumber:(unsigned short)arg2;
- (id /* block */)softAPChannelChangedEventHandler;
- (void)startConnectionUsingProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)stateUpdatedHandler;
- (id /* block */)statisticsUpdatedHandler;
- (void)threadCoexistenceEvent:(id)arg1;
- (id /* block */)threadCoexistenceEventHandler;
- (void)updatedAWDLState:(id)arg1;
- (void)updatedLowLatencyStatistics;
- (void)updatedRealtimeMode:(bool)arg1;
- (void)updatedStatistics;

@end
