
@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue> {
    unsigned long long  _conflictResolution;
    NSMutableOrderedSet * _requiredColumns;
    NSString * _table;
    NSMutableArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSString *queryString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addValue;
- (void)enumerateBindingIndicesAndValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)arg1;
- (id)initWithTable:(id)arg1;
- (id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2;
- (bool)isEmpty;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)queryString;
- (void)renderStatementWithNamedBindingsInto:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
