
@interface PHAsynchronousPhotoLibraryExecutionContext : NSObject <PHPhotoLibraryExecutionContext>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)asynchronousExecutionContext;

- (void)callTransactionCompletionHandler:(id /* block */)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (void)dispatchOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)sendChangesRequest:(id)arg1 onClient:(id)arg2 reply:(id /* block */)arg3;

@end
