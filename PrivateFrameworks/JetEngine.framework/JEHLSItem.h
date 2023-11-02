
@interface JEHLSItem : NSObject <JEMediaPlaylistItem> {
    NSArray * _eventData;
    unsigned long long  _startOverallPosition;
    unsigned long long  _startPosition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long startOverallPosition;
@property (nonatomic) unsigned long long startPosition;
@property (readonly) Class superclass;

+ (id /* block */)comparator;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)eventData;
- (id)initWithStartOverallPosition:(unsigned long long)arg1 metricsData:(id)arg2;
- (void)setEventData:(id)arg1;
- (void)setStartOverallPosition:(unsigned long long)arg1;
- (void)setStartPosition:(unsigned long long)arg1;
- (unsigned long long)startOverallPosition;
- (unsigned long long)startPosition;

@end
