
@interface VUIMediaStartTimeInfo : NSObject {
    NSString * _source;
    NSNumber * _startTime;
    NSDate * _timestamp;
    long long  _type;
}

@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSNumber *startTime;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartTime:(id)arg1 timestamp:(id)arg2 type:(long long)arg3 source:(id)arg4;
- (void)setSource:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(long long)arg1;
- (id)source;
- (id)startTime;
- (id)timestamp;
- (long long)type;

@end
