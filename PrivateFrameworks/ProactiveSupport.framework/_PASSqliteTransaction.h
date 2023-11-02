
@interface _PASSqliteTransaction : NSObject

+ (void)readTransactionWithHandle:(id)arg1 block:(id /* block */)arg2;
+ (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithHandle:(id)arg1 failableBlock:(id /* block */)arg2;
+ (void)writeTransactionWithHandle:(id)arg1 block:(id /* block */)arg2;
+ (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithHandle:(id)arg1 failableBlock:(id /* block */)arg2;

- (id)init;

@end
