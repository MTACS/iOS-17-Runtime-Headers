
@interface MKMapsSuggestionsPredictor : NSObject <MKMapsSuggestionsPredictor> {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    <MKMapsSuggestionsSignalPackCacheInterface> * _signalPackCacheInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MKMapsSuggestionsSignalPackCacheInterface> *signalPackCacheInterface;
@property (readonly) Class superclass;

+ (id)sharedPredictor;

- (void).cxx_destruct;
- (id)NSDataToMKMapsSuggestionsTransportModes:(id)arg1 error:(id*)arg2;
- (void)_closeConnection;
- (void)_initCloseTimerIfNecessary;
- (bool)_openConnectionIfNecessary;
- (void)_scheduleCloseConnection;
- (void)_unscheduleCloseConnection;
- (void)dealloc;
- (id)init;
- (void)setSignalPackCacheInterface:(id)arg1;
- (id)signalPackCacheInterface;
- (bool)transportModeForDestinationEntryData:(id)arg1 originCoordinateData:(id)arg2 handler:(id /* block */)arg3;
- (bool)transportModeForDestinationMapItemData:(id)arg1 originCoordinateData:(id)arg2 handler:(id /* block */)arg3;

@end
