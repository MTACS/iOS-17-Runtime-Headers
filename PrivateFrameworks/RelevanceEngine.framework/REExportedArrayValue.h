
@interface REExportedArrayValue : REExportedValue {
    NSArray * _array;
}

- (void).cxx_destruct;
- (id)arrayValue;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (id)exportedValueForKey:(id)arg1;
- (id)initWithArray:(id)arg1;
- (unsigned long long)propertyCount;
- (unsigned long long)type;

@end
