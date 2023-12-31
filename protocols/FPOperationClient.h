
@protocol FPOperationClient <FPCancellable>

@required

- (NSString *)proxifiedDescription;
- (void)setCancellationHandler:(id <FPCancellable>)arg1;

@optional

- (void)operationDidProgressWithInfo:(void *)arg1 error:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSDictionary *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
