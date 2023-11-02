
@protocol _CDAsyncContext <_CDContext>

@required

- (void)lastModifiedDateForContextualKeyPath:(void *)arg1 responseQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: _CDContextualKeyPath *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, void*
- (void)objectForContextualKeyPath:(void *)arg1 responseQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: _CDContextualKeyPath *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<NSCopying><NSSecureCoding> *, void*

@end
