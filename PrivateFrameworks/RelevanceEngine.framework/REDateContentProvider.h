
@interface REDateContentProvider : RETextContentProvider {
    NSDate * _date;
    NSTimeZone * _timeZone;
    unsigned long long  _units;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) unsigned long long units;

+ (id)dateContentProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;

- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)timeZone;
- (unsigned long long)units;

@end
