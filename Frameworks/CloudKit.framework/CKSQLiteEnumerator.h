
@interface CKSQLiteEnumerator : NSEnumerator {
    NSArray * _bindings;
    NSArray * _columns;
    CKSQLite * _database;
    unsigned long long  _fetchOffset;
    unsigned long long  _index;
    id /* block */  _objectTranslator;
    NSMutableArray * _objects;
    NSArray * _orderBy;
    NSString * _tableName;
    NSString * _whereSQL;
}

@property (nonatomic, copy) id /* block */ objectTranslator;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1 columns:(id)arg2 from:(id)arg3 where:(id)arg4 bindings:(id)arg5 orderBy:(id)arg6;
- (id)nextObject;
- (id /* block */)objectTranslator;
- (void)setObjectTranslator:(id /* block */)arg1;

@end
