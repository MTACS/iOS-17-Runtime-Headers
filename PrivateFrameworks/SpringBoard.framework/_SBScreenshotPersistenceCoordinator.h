
@interface _SBScreenshotPersistenceCoordinator : NSObject {
    unsigned long long  _screenshotWriteCount;
}

@property (nonatomic, readonly) bool isSaving;

- (void)_decrementWriteCount;
- (void)_finishedWritingScreenshot:(id)arg1 didFinishSavingWithError:(id)arg2 context:(void*)arg3;
- (void)_incrementWriteCount;
- (bool)_isWritingSnapshot;
- (bool)isSaving;
- (void)saveScreenshot:(id)arg1 withCompletion:(id /* block */)arg2;

@end
