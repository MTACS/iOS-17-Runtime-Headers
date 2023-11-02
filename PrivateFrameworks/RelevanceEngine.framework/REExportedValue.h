
@interface REExportedValue : NSObject

+ (id)_exportedValueForTable:(id)arg1;
+ (id)exportedValueForArray:(id)arg1;
+ (id)exportedValueForDate:(id)arg1;
+ (id)exportedValueForDictionary:(id)arg1;
+ (id)exportedValueForNumber:(id)arg1;
+ (id)exportedValueForObject:(id)arg1;
+ (id)exportedValueForString:(id)arg1;

- (id)arrayValue;
- (id)dateValue;
- (id)dictionaryValue;
- (void)enumerateValuesUsingBlock:(id /* block */)arg1;
- (id)exportedValueForKey:(id)arg1;
- (id)numberValue;
- (id)objectValue;
- (unsigned long long)propertyCount;
- (bool)shouldEncodeProperty:(id)arg1;
- (id)stringValue;
- (unsigned long long)type;

@end
