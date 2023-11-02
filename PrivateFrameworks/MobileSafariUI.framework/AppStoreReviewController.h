
@interface AppStoreReviewController : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    AMSSharedStoreReview * _sharedStoreReview;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_setupSharedStoreReviewIfNeeded;
- (void)applicationDidEnterForeground;
- (id)init;
- (void)showAppReviewPromptInSceneIfNeeded:(id)arg1;

@end
