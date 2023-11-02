
@interface EFSQLUpdateStatement : NSObject <EFSQLUpdateStatementValue> {
    NSMutableDictionary * _bindables;
    unsigned long long  _conflictResolution;
    NSMutableDictionary * _expressables;
    NSString * _table;
    <EFSQLValueExpressable> * _whereClause;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *queryString;
@property (readonly) Class superclass;
@property (nonatomic, retain) <EFSQLValueExpressable> *whereClause;

- (void).cxx_destruct;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)arg1;
- (id)initWithTable:(id)arg1;
- (id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)queryString;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setWhereClause:(id)arg1;
- (id)whereClause;

@end
