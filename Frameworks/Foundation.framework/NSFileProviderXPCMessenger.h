
@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {
    <NSFileProvider> * _fileProvider;
    NSFileProviderProxy * _fileProviderProxy;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 withInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;
- (void)checkInProviderWithReply:(id /* block */)arg1;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2;
- (id)initWithFileProviderProxy:(id)arg1;
- (void)invalidate;
- (void)movingItemAtURL:(id)arg1 withInfo:(id)arg2 fileName:(id)arg3 completionHandler:(id /* block */)arg4;
- (oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterOfURL:(id)arg2 withInfo:(id)arg3;
- (void)provideItemAtURL:(id)arg1 withInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)providePhysicalItemForURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
