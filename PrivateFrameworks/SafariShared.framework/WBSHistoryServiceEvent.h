
@interface WBSHistoryServiceEvent : NSObject <NSSecureCoding> {
    long long  _eventID;
    NSString * _eventType;
    NSDate * _time;
    NSDictionary * _value;
}

@property (nonatomic, readonly) long long eventID;
@property (nonatomic, readonly, copy) NSString *eventType;
@property (nonatomic, readonly, copy) NSDate *time;
@property (nonatomic, readonly, copy) NSDictionary *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventID;
- (id)eventType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventID:(long long)arg1 type:(id)arg2 time:(id)arg3 value:(id)arg4;
- (id)initWithType:(id)arg1 time:(id)arg2 value:(id)arg3;
- (id)time;
- (id)value;

@end
