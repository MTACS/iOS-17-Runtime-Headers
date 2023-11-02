
@interface HKMutableIntegerSet : HKIntegerSet <NSCopying, NSSecureCoding> {
    bool  _enumerating;
}

+ (bool)supportsSecureCoding;

- (void)addInteger:(long long)arg1;
- (void)enumerateIntegersUsingBlock:(id /* block */)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeInteger:(long long)arg1;

@end
