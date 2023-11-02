
@protocol _DKKnowledgeQuerying

@required

- (NSObject *)executeQuery:(_DKQuery *)arg1 error:(id*)arg2;
- (void)executeQuery:(_DKQuery *)arg1 responseQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)executeQuery:(void *)arg1 responseQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: _DKQuery *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*

@end
