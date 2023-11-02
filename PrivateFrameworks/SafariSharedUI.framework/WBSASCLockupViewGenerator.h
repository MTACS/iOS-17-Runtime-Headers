
@interface WBSASCLockupViewGenerator : NSObject <ASCLockupViewDelegate> {
    NSMutableDictionary * _lockupRequestToRequiredTeamIDMap;
    NSMutableArray * _lockupViewsPendingLoad;
    id /* block */  _pendingGenerateLockupViewsCompletionHandler;
    NSMutableArray * _succesfullyLoadedLockupViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)lockupViewGroup;
+ (id)sharedGenerator;

- (void).cxx_destruct;
- (void)_allLockupViewRequestsCompleted;
- (void)_lockupViewRequestedCompleted:(id)arg1 loadedSuccessfully:(bool)arg2;
- (void)generateLockupViewsForAvailableApps:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)lockupView:(id)arg1 didFailRequestWithError:(id)arg2;
- (void)lockupViewDidBeginRequest:(id)arg1;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (id)presentingViewControllerForLockupView:(id)arg1;

@end
