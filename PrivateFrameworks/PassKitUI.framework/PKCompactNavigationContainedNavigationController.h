
@interface PKCompactNavigationContainedNavigationController : UINavigationController <PKObservableContentContainer> {
    UIVisualEffectView * _backdropView;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    unsigned long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_observers;
- (void)addContentContainerObserver:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)removeContentContainerObserver:(id)arg1;
- (unsigned long long)style;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
