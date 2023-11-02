
@interface CKSQLiteCompiledStatement : NSObject {
    NSMutableDictionary * _bindingTypesByVariable;
    NSMutableArray * _boundObjects;
    CKSQLiteDatabase * _db;
    CKSQLiteCompiledStatementDecoder * _decoder;
    NSPointerArray * _fetchedValues;
    struct sqlite3_stmt { } * _handle;
    NSString * _label;
    NSNumber * _limit;
    bool  _needsSearchBinding;
    NSNumber * _offset;
    NSMutableString * _orderBySQL;
    NSArray * _resultColumnTypes;
    NSArray * _resultColumns;
    NSArray * _searchProperties;
    NSDictionary * _searchValues;
    bool  _shouldCache;
    NSString * _sql;
    bool  _sqlLoggingEnabled;
    CKSQLiteTable * _table;
    Class  _tableClass;
    NSPredicate * _wherePredicate;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSNumber *limit;
@property (nonatomic, retain) NSNumber *offset;
@property (nonatomic, retain) NSArray *searchProperties;
@property (nonatomic) bool shouldCache;
@property (nonatomic, readonly) CKSQLiteTable *table;

+ (id)_statementForFetchingMinMax:(id)arg1 forColumn:(id)arg2 inTable:(id)arg3;
+ (id)statementForCountingRowsInTable:(id)arg1;
+ (id)statementForDeletingInTable:(id)arg1;
+ (id)statementForFetchingAllTableNamesInDatabase:(id)arg1;
+ (id)statementForFetchingColumns:(id)arg1 inTable:(id)arg2;
+ (id)statementForFetchingMaximumValueForColumn:(id)arg1 inTable:(id)arg2;
+ (id)statementForFetchingMinimumValueForColumn:(id)arg1 inTable:(id)arg2;
+ (id)statementForInserting:(id)arg1 inTable:(id)arg2;
+ (id)statementForInserting:(id)arg1 orUpdating:(id)arg2 inTable:(id)arg3;
+ (id)statementForSizingColumn:(id)arg1 inTable:(id)arg2;
+ (id)statementForSummingColumn:(id)arg1 inTable:(id)arg2;
+ (id)statementForUpdatingColumns:(id)arg1 inTable:(id)arg2;

- (void).cxx_destruct;
- (id)_fillFetchedValues;
- (id)addBindingVariable:(id)arg1 withAssociatedProperty:(id)arg2;
- (id)bindSearchValues:(id)arg1;
- (id)bindValue:(id)arg1 ofType:(unsigned int)arg2 atIndex:(int)arg3;
- (id)bindValueColumn:(id)arg1 type:(unsigned int)arg2 value:(id)arg3;
- (id)boundObjects;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;
- (id)compile;
- (void)dealloc;
- (id)description;
- (id)doSearchValueBinding;
- (void)enumerateResultColumnsWithBlock:(id /* block */)arg1;
- (id)fetchedColumns;
- (id)initWithDatabase:(id)arg1 sql:(id)arg2 resultColumns:(id)arg3 resultColumnTypes:(id)arg4;
- (id)initWithTable:(id)arg1 sql:(id)arg2 resultColumns:(id)arg3 resultColumnTypes:(id)arg4;
- (void)invalidate;
- (id)label;
- (id)limit;
- (id)offset;
- (void)orderByProperty:(id)arg1 ascending:(bool)arg2;
- (id)propertyDecoder:(id*)arg1;
- (void)resetAndClearBindings;
- (id)searchBindingsDescription;
- (id)searchProperties;
- (void)setLabel:(id)arg1;
- (void)setLimit:(id)arg1;
- (void)setOffset:(id)arg1;
- (id)setSearchPredicate:(id)arg1 forProperties:(id)arg2 tableClass:(Class)arg3;
- (void)setSearchProperties:(id)arg1;
- (void)setShouldCache:(bool)arg1;
- (bool)shouldCache;
- (id)sqlValueForVariable:(id)arg1;
- (bool)step:(id*)arg1;
- (id)table;

@end
