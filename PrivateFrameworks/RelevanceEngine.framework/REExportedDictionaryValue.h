
@interface REExportedDictionaryValue : REExportedValue {
    NSDictionary * _dictionary;
}

- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (id)exportedValueForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)propertyCount;
- (unsigned long long)type;

@end
