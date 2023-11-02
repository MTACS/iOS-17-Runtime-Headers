
@interface WBSTranslationErrorController : NSObject {
    <WBSTranslationErrorControllerDelegate> * _delegate;
    NSCountedSet * _errorCounter;
    NSMutableSet * _errorKeysReachingThreshold;
}

@property (nonatomic) <WBSTranslationErrorControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_overriddenThresholdForError:(id)arg1;
- (void)addError:(id)arg1;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (void)setDelegate:(id)arg1;

@end
