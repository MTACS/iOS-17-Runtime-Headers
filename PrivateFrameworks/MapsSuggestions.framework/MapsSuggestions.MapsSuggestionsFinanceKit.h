
@interface MapsSuggestions.MapsSuggestionsFinanceKit : NSObject {
    void _connector;
    void _delegate;
    void _observer;
    void _queue;
    void _requester;
    void _timeWindow;
    void uniqueName;
}

@property (nonatomic, retain) <_TtP15MapsSuggestions34MapsSuggestionsFinanceKitConnector_> *_connector;
@property (nonatomic, retain) id _observer;
@property (nonatomic, readonly) OS_dispatch_queue *_queue;
@property (nonatomic, retain) <MapsSuggestionsNetworkRequester> *_requester;
@property (nonatomic) double _timeWindow;
@property (nonatomic, copy) NSString *uniqueName;

- (void).cxx_destruct;
- (id)_connector;
- (id)_observer;
- (id)_queue;
- (id)_requester;
- (double)_timeWindow;
- (bool)canProduceEntriesOfTypeWithType:(long long)arg1;
- (BOOL)deleteOrDeclineEntryWithEntry:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithConnector:(id)arg1 requester:(id)arg2;
- (void)setUniqueName:(id)arg1;
- (void)set_connector:(id)arg1;
- (void)set_observer:(id)arg1;
- (void)set_requester:(id)arg1;
- (void)set_timeWindow:(double)arg1;
- (id)uniqueName;
- (void)updateOrdersWithOrders:(id)arg1;

@end
