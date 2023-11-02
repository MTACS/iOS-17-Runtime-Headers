
@interface _PASSqliteNSDictionaryCursor : _PASSqliteKeyValueCursor {
    id  _currentKey;
    id  _currentValue;
    NSDictionary * _dictionary;
    NSEnumerator * _keysEnumerator;
    id  _valueEqualTo;
}

@property (nonatomic, retain) NSDictionary *collection;

+ (id)planningInfoForKeyConstraint:(int)arg1;
+ (const char *)sqliteMethodName;

- (void).cxx_destruct;
- (void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2;
- (id)currentIndexedKey;
- (bool)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void)setCollection:(id)arg1;
- (void)stepIndexedRow;

@end
