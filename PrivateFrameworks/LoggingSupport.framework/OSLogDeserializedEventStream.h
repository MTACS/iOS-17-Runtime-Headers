
@interface OSLogDeserializedEventStream : OSLogEventStreamBase {
    NSArray * _curEventArray;
    <OSLogEventDeserializerDataSourceDelegate> * _dataSourceDelegate;
    NSEnumerator * _eventDictionaryEnumerator;
    bool  _hasActivated;
    _OSLogEventSerializationMetadata * _metadata;
}

@property (nonatomic, readonly) NSArray *curEventArray;
@property (nonatomic, readonly) <OSLogEventDeserializerDataSourceDelegate> *dataSourceDelegate;
@property (nonatomic, readonly) NSEnumerator *eventDictionaryEnumerator;
@property (nonatomic, readonly) NSDate *firstDate;
@property (nonatomic) bool hasActivated;
@property (nonatomic, readonly) NSDate *lastDate;
@property (nonatomic, readonly) _OSLogEventSerializationMetadata *metadata;

- (void).cxx_destruct;
- (id)_eventArrayFromData:(id)arg1;
- (void)_iterateThroughEventsWithProxy:(id)arg1 filter:(id)arg2 startingDate:(id)arg3;
- (id)_nextEventDictionary;
- (void)_runInvalidationHandler:(unsigned long long)arg1;
- (void)_updateEventArray;
- (void)activate;
- (void)activateStreamFromDate:(id)arg1;
- (id)curEventArray;
- (id)dataSourceDelegate;
- (id)eventDictionaryEnumerator;
- (id)firstDate;
- (bool)hasActivated;
- (id)initWithDataSourceDelegate:(id)arg1;
- (id)lastDate;
- (id)metadata;
- (void)setHasActivated:(bool)arg1;

@end
