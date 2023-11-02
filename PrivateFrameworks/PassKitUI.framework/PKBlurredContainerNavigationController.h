
@interface PKBlurredContainerNavigationController : UINavigationController <PKObservableContentContainer> {
    UIVisualEffectView * _backdropView;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_observers;
- (void)addContentContainerObserver:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeContentContainerObserver:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
