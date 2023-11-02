
@interface KGDoublePropertyValue : KGPropertyValue {
    double  _value;
}

@property (nonatomic, readonly) double value;

- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)initWithValue:(double)arg1;
- (bool)isEqual:(id)arg1;
- (id)kgPropertyValue;
- (double)value;

@end
