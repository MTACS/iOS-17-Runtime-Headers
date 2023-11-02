
@interface EFSQLIndexedColumnSchema : NSObject {
    unsigned long long  _collation;
    <EFSQLExpressable> * _expression;
    unsigned long long  _orderDirection;
}

@property (nonatomic, readonly) unsigned long long collation;
@property (nonatomic, readonly, copy) NSString *definition;
@property (nonatomic, readonly) <EFSQLExpressable> *expression;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long orderDirection;

- (void).cxx_destruct;
- (unsigned long long)collation;
- (id)definition;
- (id)expression;
- (id)initWithColumnName:(id)arg1;
- (id)initWithColumnName:(id)arg1 collation:(unsigned long long)arg2 orderDirection:(unsigned long long)arg3;
- (id)initWithColumnName:(id)arg1 orderDirection:(unsigned long long)arg2;
- (id)initWithExpression:(id)arg1;
- (id)initWithExpression:(id)arg1 collation:(unsigned long long)arg2 orderDirection:(unsigned long long)arg3;
- (id)initWithExpression:(id)arg1 orderDirection:(unsigned long long)arg2;
- (id)name;
- (unsigned long long)orderDirection;

@end
