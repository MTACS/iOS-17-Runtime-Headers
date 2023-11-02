
@interface WBSTranslationScrollInteractionAnalyticsHelper : NSObject {
    double  _firstInteractionDelayFromTranslation;
    double  _maxVisibleHeightPercentage;
    id /* block */  _submissionHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _synchronousIvarLock;
    NSDate * _translationStartTime;
    bool  _webViewHasInteraction;
}

@property (nonatomic, copy) id /* block */ submissionHandler;

- (void).cxx_destruct;
- (void)_calculateFirstInteractionDelayAndMaxPercentageWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)recordFirstInteractionIfNeeded;
- (void)setSubmissionHandler:(id /* block */)arg1;
- (id /* block */)submissionHandler;
- (void)updateMaxVisibleHeightPercentage:(double)arg1;

@end
