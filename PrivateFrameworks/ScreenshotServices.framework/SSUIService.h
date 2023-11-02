
@interface SSUIService : NSObject {
    SSUIServiceClient * _client;
}

- (void).cxx_destruct;
- (void)_runPPTNamed:(id)arg1 numberOfRequiredScreenshots:(unsigned long long)arg2;
- (id)init;
- (void)showScreenshotUI;
- (void)showScreenshotUIForImage:(id)arg1 options:(id)arg2;
- (void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)takeScreenshotWithOptions:(id)arg1;

@end
