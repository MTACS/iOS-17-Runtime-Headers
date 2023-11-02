
@interface MapsSuggestionsRealBiomeConnector : NSObject <MapsSuggestionsBiomeConnector> {
    BMBiomeScheduler * _findMyScheduler;
    BPSSink * _findMySink;
    id /* block */  _findMyUpdateHandler;
    double  _lookbackDuration;
    long long  _maxEvents;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registerForFindMyUpdates;
    bool  _registerForSmartRepliesUpdates;
    BMBiomeScheduler * _smartRepliesScheduler;
    BPSSink * _smartRepliesSink;
    id /* block */  _smartRepliesUpdateHandler;
    NSString * uniqueName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (bool)getFindMyStreamsWithHandler:(id /* block */)arg1;
- (bool)getSmartRepliesStreamsWithHandler:(id /* block */)arg1;
- (id)init;
- (bool)registerForFindMyUpdatesWithHandler:(id /* block */)arg1;
- (bool)registerForSmartRepliesUpdatesWithHandler:(id /* block */)arg1;
- (id)uniqueName;
- (void)unregisterFindMyUpdates;
- (void)unregisterSmartRepliesUpdates;

@end
