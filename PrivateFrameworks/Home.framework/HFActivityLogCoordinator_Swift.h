
@interface HFActivityLogCoordinator_Swift : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _activelyFetching;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _eventsByDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastError;
    void debugEvents;
    void delegate;
    void home;
    void isFetchingData;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  latestFetchDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  oldestFetchDate;
    void previousHomeQuery;
    void queryController;
    void shouldFetchOlderEvents;
    void sortedEvents;
    void updateTimer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithHome:(id)arg1;
- (void)numberOfEventsThatExistSince:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 14: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, long double, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
