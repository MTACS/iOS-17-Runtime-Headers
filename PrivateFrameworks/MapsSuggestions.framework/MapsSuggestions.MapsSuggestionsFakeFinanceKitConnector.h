
@interface MapsSuggestions.MapsSuggestionsFakeFinanceKitConnector : NSObject <MapsSuggestions.MapsSuggestionsFinanceKitConnector> {
    void _callbackHandle;
    void orderPickups;
}

@property (nonatomic, copy) id /* block */ _callbackHandle;
@property (nonatomic, copy) NSArray *orderPickups;

- (void).cxx_destruct;
- (id /* block */)_callbackHandle;
- (id)init;
- (id)orderPickups;
- (void)setOrderPickups:(id)arg1;
- (void)set_callbackHandle:(id /* block */)arg1;
- (id)startObservingOrderPickupsIn:(double)arg1 callback:(id /* block */)arg2;
- (void)updatedOrders;

@end
