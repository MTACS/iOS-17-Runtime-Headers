
@interface PXViewControllerEventTracker : PXUserInterfaceElementEventTracker <PXChangeObserver, PXViewControllerEventTracker> {
    NSObject<PXAnonymousViewController> * _currentViewController;
    bool  _isViewVisible;
    NSString * _viewName;
    long long  _viewSignpost;
}

@property (nonatomic) NSObject<PXAnonymousViewController> *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isViewVisible;
@property (nonatomic, copy) NSMutableDictionary *payload;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *viewName;
@property (nonatomic) long long viewSignpost;

- (void).cxx_destruct;
- (void)_invalidateIsViewVisible;
- (void)_updateIsViewVisible;
- (id)currentViewController;
- (void)didPerformChanges;
- (id)init;
- (id)initWithViewName:(id)arg1;
- (bool)isViewVisible;
- (void)logViewControllerDidAppear:(id)arg1;
- (void)logViewControllerDidDisappear:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setCurrentViewController:(id)arg1;
- (void)setIsViewVisible:(bool)arg1;
- (void)setViewSignpost:(long long)arg1;
- (id)viewName;
- (long long)viewSignpost;

@end
