
@interface APRequestExtension : NSObject <NSExtensionRequestHandling> {
    NSExtensionContext * _extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finish;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)checkDownloadQueue;
- (id)extensionContext;
- (void)requestUpdatedWithResult:(id)arg1 completion:(id /* block */)arg2;
- (void)setExtensionContext:(id)arg1;

@end
