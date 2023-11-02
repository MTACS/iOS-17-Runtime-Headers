
@interface _IXSimpleInstallerDelegate : NSObject <IXAppInstallCoordinatorObserver> {
    NSString * _bundleID;
    id /* block */  _completion;
    IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> * _coordinator;
    NSURL * _moveResultToURL;
    id /* block */  _progressBlock;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) IXAppInstallCoordinator<IXInitiatingOrUpdatingCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *moveResultToURL;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleID;
- (id /* block */)completion;
- (id)coordinator;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinator:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forApplicationRecord:(id)arg2;
- (id)moveResultToURL;
- (id /* block */)progressBlock;
- (void)setBundleID:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setMoveResultToURL:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;

@end
