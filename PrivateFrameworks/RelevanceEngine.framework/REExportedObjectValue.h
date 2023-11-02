
@interface REExportedObjectValue : REExportedValue {
    bool  _allowsEncoding;
    id  _object;
}

- (void).cxx_destruct;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (id)exportedValueForKey:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)objectValue;
- (unsigned long long)propertyCount;
- (bool)shouldEncodeProperty:(id)arg1;
- (unsigned long long)type;

@end
