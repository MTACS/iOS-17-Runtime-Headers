
@interface SFClientTimingFeedback : SFFeedback {
    NSString * _eventName;
    NSString * _input;
    unsigned long long  _nanosecondInterval;
}

@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, copy) NSString *input;
@property unsigned long long nanosecondInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 timeInterval:(unsigned long long)arg2 queryId:(unsigned long long)arg3;
- (id)input;
- (unsigned long long)nanosecondInterval;
- (void)setEventName:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setNanosecondInterval:(unsigned long long)arg1;

@end
