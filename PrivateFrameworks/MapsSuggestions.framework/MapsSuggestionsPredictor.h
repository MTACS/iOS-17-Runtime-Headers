
@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor> {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    MapsSuggestionsSignalPackCache * _signalPackCache;
    int  _tempPredictedTransportMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)sharedPredictor;

- (void).cxx_destruct;
- (void)cancelCapturingAnalytics;
- (void)captureActualTransportationMode:(int)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3;
- (void)capturePredictedTransportationMode:(int)arg1;
- (void)dealloc;
- (id)init;
- (bool)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (bool)predictedTransportModeForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (void)storeSignalPack:(id)arg1 forMapItem:(id)arg2 andEntry:(id)arg3;
- (id)uniqueName;

@end
