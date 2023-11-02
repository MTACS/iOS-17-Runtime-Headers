
@interface _OSLogEventSerializationMetadata : NSObject {
    NSString * _filterPredicateDescription;
    NSDate * _firstDate;
    unsigned long long  _flags;
    NSMutableDictionary * _indexToStringMapping;
    NSDate * _lastDate;
    unsigned long long  _maxLogEventBatchSize;
    unsigned long long  _serializedEventCount;
    NSMutableDictionary * _stringToIndexMapping;
}

@property (nonatomic, retain) NSString *filterPredicateDescription;
@property (nonatomic, retain) NSDate *firstDate;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, readonly) NSMutableDictionary *indexToStringMapping;
@property (nonatomic, retain) NSDate *lastDate;
@property (nonatomic) unsigned long long maxLogEventBatchSize;
@property (nonatomic) unsigned long long serializedEventCount;
@property (nonatomic, readonly) NSMutableDictionary *stringToIndexMapping;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)filterPredicateDescription;
- (id)firstDate;
- (unsigned long long)flags;
- (id)indexForString:(id)arg1;
- (id)indexToStringMapping;
- (id)init;
- (id)initWithDataRepresentation:(id)arg1;
- (id)lastDate;
- (unsigned long long)maxLogEventBatchSize;
- (unsigned long long)serializedEventCount;
- (void)setFilterPredicateDescription:(id)arg1;
- (void)setFirstDate:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setLastDate:(id)arg1;
- (void)setMaxLogEventBatchSize:(unsigned long long)arg1;
- (void)setSerializedEventCount:(unsigned long long)arg1;
- (id)stringForIndex:(id)arg1;
- (id)stringToIndexMapping;

@end
