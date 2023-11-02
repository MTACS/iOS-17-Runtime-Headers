
@interface _DKTemporalNumericState : NSObject <NSSecureCoding> {
    NSNumber * _state;
    NSDate * _timestamp;
}

@property (retain) NSNumber *state;
@property (retain) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 timestamp:(id)arg2;
- (void)setState:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)state;
- (id)timestamp;

@end
