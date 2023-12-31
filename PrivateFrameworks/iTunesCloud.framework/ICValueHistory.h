
@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _items;
}

@property (nonatomic, readonly) long long count;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addValue:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)addValuesFromHistory:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1;
- (id)firstValueBeforeOrEqualToTimestamp:(unsigned long long)arg1;
- (id)firstValueBeforeTimestamp:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastValue;
- (id)lastValueAndTimestamp:(unsigned long long*)arg1;
- (void)removeAllValues;
- (void)removeValuesBeforeTimestamp:(unsigned long long)arg1;

@end
