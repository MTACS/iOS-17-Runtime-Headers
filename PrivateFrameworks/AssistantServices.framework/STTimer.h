
@interface STTimer : STSiriModelObject {
    NSNumber * _duration;
    NSDate * _fireDate;
    NSString * _label;
    long long  _state;
    NSString * _timerId;
    NSNumber * _value;
}

@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSString *timerId;
@property (nonatomic, copy) NSNumber *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setDuration:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTimerId:(id)arg1;
- (void)setValue:(id)arg1;
- (long long)state;
- (id)timerId;
- (id)value;

@end
