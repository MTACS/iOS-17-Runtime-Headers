
@interface HKSemanticDate : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSString * _keyPath;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSString *keyPath;

+ (id)semanticDateWithKeyPath:(id)arg1 date:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyPath;

@end
