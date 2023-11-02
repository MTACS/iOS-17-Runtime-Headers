
@interface EKAutocompletePendingSearch : NSObject <EKAutocompletePendingSearchProtocol> {
    EKEventStore * _eventStore;
    bool  _ignoreScheduledEvents;
    EKEvent * _initialEvent;
    unsigned long long  _maximumResultCount;
    <EKAutocompleteSearchPasteboardItemProvider> * _pasteboardItemProvider;
    <CalSpotlightQueryPendingSearchProtocol> * _pendingSearch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventKitQueue;
+ (id)_queue;
+ (void)_updateResult:(id)arg1 withEvent:(id)arg2;

- (void).cxx_destruct;
- (bool)_shouldReturnResultForEvent:(id)arg1 considerReadonlyEvents:(bool)arg2;
- (void)cancel;
- (id)firstNaturalLanguageResultWithSearchString:(id)arg1;
- (id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 ignoreScheduledEvents:(bool)arg4 initialEvent:(id)arg5 pasteboardItemProvider:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)searchWithString:(id)arg1 completionHandler:(id /* block */)arg2;

@end
