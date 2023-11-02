
@interface SKInstallSheetStatusUpdateRequest : SKRequest {
    NSString * _bundleId;
    id /* block */  _completionHandler;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_start;
- (id)bundleId;
- (id /* block */)completionHandler;
- (id)initWithAppBundleId:(id)arg1 isInstallSheetOpen:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
