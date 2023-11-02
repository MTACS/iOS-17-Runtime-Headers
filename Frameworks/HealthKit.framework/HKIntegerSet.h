
@interface HKIntegerSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct __CFSet { } * _set;
}

@property (nonatomic, readonly) unsigned long long count;

+ (bool)supportsSecureCoding;

- (bool)containsInteger:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateIntegersUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(long long)arg1;
- (id)initWithSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
