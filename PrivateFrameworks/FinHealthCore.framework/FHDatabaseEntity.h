
@interface FHDatabaseEntity : NSObject {
    FHDatabaseManager * _databaseManager;
    NSString * _entityName;
    NSArray * _fieldsIndex;
    NSDictionary * _scalarFunctions;
    NSDictionary * _windowFunctions;
}

@property (nonatomic, copy) FHDatabaseManager *databaseManager;
@property (nonatomic, copy) NSString *entityName;
@property (getter=fieldsInOrder, nonatomic, readonly, copy) NSArray *fieldsIndex;
@property (nonatomic, copy) NSDictionary *scalarFunctions;
@property (nonatomic, copy) NSDictionary *windowFunctions;

- (void).cxx_destruct;
- (id)_availableFunctions:(long long)arg1 functionTypeFilter:(id)arg2;
- (void)clearData;
- (id)databaseManager;
- (id)entityName;
- (id)fieldsInOrder;
- (id)initWithEntityName:(id)arg1;
- (void)insertOrUpdate:(id)arg1 upsert:(bool)arg2;
- (void)queryDataWithBlock:(id)arg1 logicalOperator:(id)arg2 limit:(unsigned long long)arg3 selectFields:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)queryDataWithBlock:(id)arg1 logicalOperator:(id)arg2 selectFields:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)queryDataWithBlock:(id)arg1 logicalOperator:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)scalarFunctions;
- (void)setDatabaseManager:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setScalarFunctions:(id)arg1;
- (void)setWindowFunctions:(id)arg1;
- (void)streamDataWithDictionaryHandler:(id /* block */)arg1;
- (id)windowFunctions;

@end
