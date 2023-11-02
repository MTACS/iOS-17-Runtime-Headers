
@interface VUIDebugMetricsEvent : NSObject {
    NSArray * _eventData;
    NSDictionary * _rawData;
    NSArray * _sortedPageKeys;
    NSArray * _sortedPrimaryKeys;
}

@property (nonatomic, retain) NSArray *eventData;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) NSString *pageContext;
@property (nonatomic, retain) NSDictionary *rawData;
@property (nonatomic, readonly) NSDictionary *rawEvent;
@property (nonatomic, retain) NSArray *sortedPageKeys;
@property (nonatomic, retain) NSArray *sortedPrimaryKeys;

- (void).cxx_destruct;
- (id)_sortKeys:(id)arg1;
- (id)eventData;
- (id)eventDate;
- (id)eventType;
- (id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)pageContext;
- (id)rawData;
- (id)rawEvent;
- (void)setEventData:(id)arg1;
- (void)setRawData:(id)arg1;
- (void)setSortedPageKeys:(id)arg1;
- (void)setSortedPrimaryKeys:(id)arg1;
- (id)sortedPageKeys;
- (id)sortedPrimaryKeys;

@end
