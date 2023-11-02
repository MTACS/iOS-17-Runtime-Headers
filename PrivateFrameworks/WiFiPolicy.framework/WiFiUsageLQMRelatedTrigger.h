
@interface WiFiUsageLQMRelatedTrigger : NSObject {
    NSString * _reason;
    NSDate * _timestamp;
    NSString * _trigger;
}

@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *trigger;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTrigger:(id)arg1 andReason:(id)arg2 andTimestamp:(id)arg3;
- (id)reason;
- (void)setReason:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)timestamp;
- (id)trigger;

@end
