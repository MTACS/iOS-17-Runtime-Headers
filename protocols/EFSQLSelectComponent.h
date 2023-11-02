
@protocol EFSQLSelectComponent <NSObject>

@required

- (void)addResultColumn:(NSString *)arg1;
- (void)addResultColumn:(NSString *)arg1 alias:(NSString *)arg2;
- (void)groupByColumn:(NSString *)arg1;
- (<EFSQLSelectComponent> *)join:(NSString *)arg1 alias:(NSString *)arg2 on:(id <EFSQLExpressable>)arg3;
- (<EFSQLSelectComponent> *)join:(NSString *)arg1 alias:(NSString *)arg2 sourceColumn:(NSString *)arg3 targetColumn:(NSString *)arg4;
- (<EFSQLSelectComponent> *)join:(NSString *)arg1 on:(id <EFSQLExpressable>)arg2;
- (<EFSQLSelectComponent> *)join:(NSString *)arg1 sourceColumn:(NSString *)arg2 targetColumn:(NSString *)arg3;
- (<EFSQLSelectComponent> *)leftOuterJoin:(NSString *)arg1 alias:(NSString *)arg2 on:(id <EFSQLExpressable>)arg3;
- (<EFSQLSelectComponent> *)leftOuterJoin:(NSString *)arg1 alias:(NSString *)arg2 sourceColumn:(NSString *)arg3 targetColumn:(NSString *)arg4;
- (<EFSQLSelectComponent> *)leftOuterJoin:(NSString *)arg1 on:(id <EFSQLExpressable>)arg2;
- (<EFSQLSelectComponent> *)leftOuterJoin:(NSString *)arg1 sourceColumn:(NSString *)arg2 targetColumn:(NSString *)arg3;
- (void)orderByColumn:(NSString *)arg1 ascending:(bool)arg2;

@end
