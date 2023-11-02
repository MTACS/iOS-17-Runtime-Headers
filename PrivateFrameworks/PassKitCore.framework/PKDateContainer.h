
@interface PKDateContainer : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)timeZone;

@end
