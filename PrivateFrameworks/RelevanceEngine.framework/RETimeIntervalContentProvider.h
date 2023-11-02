
@interface RETimeIntervalContentProvider : RETextContentProvider {
    NSDate * _endDate;
    NSDate * _startDate;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)timeIntervalContentProviderWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;

- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)startDate;
- (id)timeZone;

@end
