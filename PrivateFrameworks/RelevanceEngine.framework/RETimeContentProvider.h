
@interface RETimeContentProvider : RETextContentProvider {
    NSDate * _date;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)timeContentProviderWithDate:(id)arg1 timeZone:(id)arg2;

- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 timeZone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)timeZone;

@end
