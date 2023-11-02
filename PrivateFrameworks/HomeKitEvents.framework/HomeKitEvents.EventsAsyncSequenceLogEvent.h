
@interface HomeKitEvents.EventsAsyncSequenceLogEvent : HMMLogEvent {
    void cachedEvents;
    void emittedEvents;
    void processedRecords;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  queryIdentifier;
    void state;
}

- (void).cxx_destruct;
- (id)init;

@end
