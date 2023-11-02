
@interface RERelativeDateContentProvider : RETextContentProvider {
    NSDate * _date;
    long long  _style;
    unsigned long long  _units;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) unsigned long long units;

+ (id)relativeDateContentProviderWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 style:(long long)arg2 units:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)style;
- (unsigned long long)units;

@end
