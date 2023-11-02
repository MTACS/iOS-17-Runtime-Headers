
@interface MapsSuggestionsBiome : NSObject <MapsSuggestionsObject> {
    <MapsSuggestionsBiomeConnector> * _connector;
    double  _expirationDuration;
    id /* block */  _findMyUpdateHandler;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredForFindMy;
    bool  _registeredForSmartReplies;
    id /* block */  _smartRepliesUpdateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)_entriesFromFindMy:(id)arg1;
- (id)_entriesFromSmartReplies:(id)arg1;
- (bool)_shouldAllowEventType:(int)arg1;
- (void)dealloc;
- (bool)entriesFromFindMyWithCompletionHandler:(id /* block */)arg1;
- (bool)entriesFromSmartRepliesWithCompletionHandler:(id /* block */)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (void)registerForUpdatesWithHandler:(id /* block */)arg1;
- (id)uniqueName;

@end
