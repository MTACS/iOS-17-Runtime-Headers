
@interface SAUIIndicatorElementViewController : UIViewController <SAUIElementViewControlling> {
    <SAUIIndicatorElementViewProviding> * _elementViewProvider;
    <SAUILayoutHosting> * _layoutHost;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SAUIIndicatorElementViewProviding> *elementViewProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SAUILayoutHosting> *layoutHost;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (void)addElementViewControllingObserver:(id)arg1;
- (id)elementViewProvider;
- (bool)handleLongPress:(id)arg1;
- (bool)handleTap:(id)arg1;
- (id)initWithIndicatorElementViewProvider:(id)arg1;
- (id)layoutHost;
- (void)removeElementViewControllingObserver:(id)arg1;
- (void)setLayoutHost:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
