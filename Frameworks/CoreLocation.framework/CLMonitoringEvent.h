
@interface CLMonitoringEvent : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSString * _identifier;
    CLCondition * _refinement;
    unsigned long long  _state;
}

@property (readonly) NSDate *date;
@property (readonly) NSString *identifier;
@property (readonly) CLCondition *refinement;
@property (nonatomic, readonly) unsigned long long state;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 refinement:(id)arg2 state:(unsigned long long)arg3 date:(id)arg4;
- (id)refinement;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
