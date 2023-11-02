
@interface PLAsynchronousPhotoLibraryExecutionContext : NSObject <PLPhotoLibraryExecutionContext>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)performTransactionOnLibrary:(id)arg1 transaction:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
