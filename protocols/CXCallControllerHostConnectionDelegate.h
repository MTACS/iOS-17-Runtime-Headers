
@protocol CXCallControllerHostConnectionDelegate <NSObject>

@required

- (void)callControllerHostConnection:(void *)arg1 requestCalls:(void *)arg2; // needs 2 arg types, found 7: CXCallControllerHostConnection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)callControllerHostConnection:(void *)arg1 requestTransaction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CXCallControllerHostConnection *, CXTransaction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)callControllerHostConnectionInvalidated:(CXCallControllerHostConnection *)arg1;

@end
