
@interface PKApplicationMessageKey : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _source;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long source;

+ (id)createWithSource:(long long)arg1 identifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)source;

@end
