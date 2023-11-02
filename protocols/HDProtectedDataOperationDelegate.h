
@protocol HDProtectedDataOperationDelegate <NSObject>

@required

- (void)performWorkForOperation:(void *)arg1 profile:(void *)arg2 databaseAccessibilityAssertion:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: HDProtectedDataOperation *, HDProfile *, HDAssertion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
