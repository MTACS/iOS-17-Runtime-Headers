
@protocol _DKKnowledgeSaving

@required

- (bool)saveObjects:(NSArray *)arg1 error:(id*)arg2;
- (void)saveObjects:(void *)arg1 responseQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)saveObjects:(void *)arg1 tracker:(void *)arg2 responseQueue:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 19: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, NSObject<OS_dispatch_queue> *, id /* block */, void*, void, id /* block */, bool, NSError *, void*

@end
