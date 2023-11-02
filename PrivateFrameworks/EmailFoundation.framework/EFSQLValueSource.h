
@interface EFSQLValueSource : NSObject {
    <EFSQLValueExpressable> * _bitExpression;
    NSString * _columnAlias;
    EFSQLColumnSchema * _sourceColumn;
    NSString * _sourceTableAlias;
}

@property (nonatomic, readonly) <EFSQLValueExpressable> *bitExpression;
@property (nonatomic, readonly) NSString *columnAlias;
@property (nonatomic, readonly) EFSQLColumnSchema *sourceColumn;
@property (nonatomic, readonly) NSString *sourceTableName;

- (void).cxx_destruct;
- (id)bitExpression;
- (id)columnAlias;
- (id)initWithColumn:(id)arg1;
- (id)initWithColumn:(id)arg1 bitExpression:(id)arg2;
- (id)initWithColumn:(id)arg1 bitExpression:(id)arg2 columnAlias:(id)arg3;
- (id)initWithColumn:(id)arg1 columnAlias:(id)arg2;
- (id)initWithColumn:(id)arg1 sourceTableAlias:(id)arg2 columnAlias:(id)arg3;
- (id)sourceColumn;
- (id)sourceTableName;

@end
