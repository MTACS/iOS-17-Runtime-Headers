
@interface APOdmlBiomeStream : NSObject {
    BMStoreConfig * _config;
    NSDate * _endDate;
    NSNumber * _maxEvents;
    bool  _reverse;
    NSDate * _startDate;
    BMStoreStream * _stream;
    NSString * _streamName;
}

@property (nonatomic, retain) BMStoreConfig *config;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSNumber *maxEvents;
@property (nonatomic) bool reverse;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) BMStoreStream *stream;
@property (nonatomic, retain) NSString *streamName;

- (void).cxx_destruct;
- (id)_applicationSupportDirectory;
- (id)config;
- (id)endDate;
- (void)enumerateEvents:(id /* block */)arg1;
- (void)enumerateEvents:(id)arg1 result:(id /* block */)arg2;
- (void)enumerateEventsWithDictionary:(id /* block */)arg1;
- (void)filterEvents:(id /* block */)arg1 result:(id /* block */)arg2;
- (void)filterEventsWithDictionary:(id /* block */)arg1 result:(id /* block */)arg2;
- (id)initWithName:(id)arg1;
- (id)maxEvents;
- (id)publisher;
- (void)removeAllEvents;
- (void)removeEvents:(id /* block */)arg1;
- (void)removeEventsWithDictionary:(id /* block */)arg1;
- (bool)reverse;
- (void)setConfig:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setMaxEvents:(id)arg1;
- (void)setReverse:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setStreamName:(id)arg1;
- (id)startDate;
- (id)stream;
- (id)streamName;
- (void)writeEvent:(id)arg1;

@end
