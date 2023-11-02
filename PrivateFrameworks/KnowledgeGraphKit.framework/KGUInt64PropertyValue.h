
@interface KGUInt64PropertyValue : KGPropertyValue {
    unsigned long long  _value;
}

@property (nonatomic, readonly) unsigned long long value;

- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)kgPropertyValue;
- (unsigned long long)value;

@end
