
@interface LBFBucket : NSObject {
    unsigned long long  _bucketIndex;
    NSDate * _endTime;
    NSMutableDictionary * _eventTree;
    NSDate * _startTime;
}

@property (nonatomic) unsigned long long bucketIndex;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, retain) NSMutableDictionary *eventTree;
@property (nonatomic, readonly) NSDate *startTime;

- (void).cxx_destruct;
- (unsigned long long)bucketIndex;
- (id)endTime;
- (id)eventTree;
- (id)flattenEvents;
- (id)initWithInterval:(id)arg1 endTimestamp:(id)arg2 index:(unsigned long long)arg3;
- (void)setBucketIndex:(unsigned long long)arg1;
- (void)setEventTree:(id)arg1;
- (id)startTime;

@end
