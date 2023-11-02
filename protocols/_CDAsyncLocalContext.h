
@protocol _CDAsyncLocalContext <_CDLocalContext, _CDAsyncContext>

@required

- (void)addObjects:(void *)arg1 andRemoveObjects:(void *)arg2 fromArrayAtKeyPath:(void *)arg3 responseQueue:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSArray *, _CDContextualKeyPath *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)addObjects:(void *)arg1 toArrayAtKeyPath:(void *)arg2 responseQueue:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, _CDContextualKeyPath *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeObjects:(void *)arg1 fromArrayAtKeyPath:(void *)arg2 responseQueue:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, _CDContextualKeyPath *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeObjectsMatchingPredicate:(void *)arg1 fromArrayAtKeyPath:(void *)arg2 responseQueue:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSPredicate *, _CDContextualKeyPath *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setObject:(void *)arg1 forContextualKeyPath:(void *)arg2 responseQueue:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSObject<NSCopying><NSSecureCoding> *, _CDContextualKeyPath *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
