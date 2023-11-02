
@interface KGInt64PropertyValue : KGPropertyValue {
    long long  _value;
}

@property (nonatomic, readonly) long long value;

- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)initWithValue:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)kgPropertyValue;
- (long long)value;

@end
