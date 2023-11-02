
@interface KGStringPropertyValue : KGPropertyValue {
    NSString * _value;
}

@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kgPropertyValue;
- (id)value;

@end
