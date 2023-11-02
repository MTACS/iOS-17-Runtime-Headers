
@interface SASTestingInputController : NSObject {
    SiriTestingContext * _preloadedTestingInput;
}

@property (nonatomic, readonly) SiriTestingContext *preloadedTestingInput;

- (void).cxx_destruct;
- (void)_registerForTestingNotifications;
- (void)_testingAudioInputPathsDidChange:(id)arg1;
- (void)_testingStringsDidChange:(id)arg1;
- (void)dealloc;
- (id)dequeuePreloadedTestingContext;
- (id)init;
- (id)preloadedTestingInput;

@end
