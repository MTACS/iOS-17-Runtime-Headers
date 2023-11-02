
@interface NPTMetadataEvent : NSObject {
    Class  _collectorType;
    NSDictionary * _data;
    int  _eventType;
    double  _timeSinceStart;
    NSDate * _timeStamp;
}

@property (nonatomic, readonly) NSDictionary *asDictionary;
@property (nonatomic, retain) Class collectorType;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic) int eventType;
@property (nonatomic) double timeSinceStart;
@property (nonatomic, retain) NSDate *timeStamp;

- (void).cxx_destruct;
- (id)asDictionary;
- (Class)collectorType;
- (id)data;
- (int)eventType;
- (id)initWithType:(Class)arg1 eventType:(int)arg2 timeStamp:(id)arg3 data:(id)arg4;
- (void)setCollectorType:(Class)arg1;
- (void)setData:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setTimeSinceStart:(double)arg1;
- (void)setTimeStamp:(id)arg1;
- (double)timeSinceStart;
- (id)timeStamp;

@end
