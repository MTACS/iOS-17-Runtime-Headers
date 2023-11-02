
@interface HFAnalyticsEvent : NSObject {
    NSDate * _timestamp;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1;
- (id)name;
- (id)payload;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (unsigned long long)type;

@end
