
@interface CMWaterSubmersionEvent : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    long long  _state;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long state;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(long long)arg1 andDate:(id)arg2;
- (long long)state;

@end
