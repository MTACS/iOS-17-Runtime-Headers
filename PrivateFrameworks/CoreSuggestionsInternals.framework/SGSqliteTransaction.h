
@interface SGSqliteTransaction : NSObject

+ (void)readTransactionWithHandle:(id)arg1 block:(id /* block */)arg2;
+ (void)writeTransactionWithHandle:(id)arg1 block:(id /* block */)arg2;

@end
