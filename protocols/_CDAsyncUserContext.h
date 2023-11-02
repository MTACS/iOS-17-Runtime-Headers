
@protocol _CDAsyncUserContext <_CDUserContext, _CDAsyncContext>

@required

- (void)valuesForKeyPaths:(void *)arg1 responseQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
