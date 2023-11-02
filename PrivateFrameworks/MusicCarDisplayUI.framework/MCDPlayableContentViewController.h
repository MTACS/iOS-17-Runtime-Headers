
@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate> {
    NSString * _bundleID;
    bool  _hasBrowsableContent;
    bool  _hasLoaded;
    bool  _hasSectionedContent;
    MCDPCModel * _model;
    NSOperationQueue * _modelInvalidationQueue;
    MCDPCContainer * _rootContainer;
    NSArray * _stackToRebuild;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *modelInvalidationQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createRootViewController;
- (id)_createSectionedRootViewController;
- (void)_modelDidInvalidate:(id)arg1;
- (void)_nowPlayingIdentifiersChanged:(id)arg1;
- (void)_populateStack;
- (void)_setupView;
- (id)bundleID;
- (id)currentStack;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 stack:(id)arg2;
- (id)modelInvalidationQueue;
- (void)refreshNavigationStackForLaunch;
- (void)setModelInvalidationQueue:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
