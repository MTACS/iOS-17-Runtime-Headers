
@interface RTHint : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    RTLocation * _location;
    long long  _source;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) RTLocation *location;
@property (nonatomic, readonly) long long source;

+ (id)hintSourceToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 source:(long long)arg2 date:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)location;
- (long long)source;

@end
