
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem {
    bool  _hasBeenUsed;
    <UISplitViewControllerImpl> * _impl;
}

@property (getter=_hasBeenUsed, nonatomic, readonly) bool hasBeenUsed;
@property (getter=_impl, setter=_setImpl:, nonatomic) <UISplitViewControllerImpl> *impl;

- (void).cxx_destruct;
- (bool)_hasBeenUsed;
- (id)_impl;
- (void)_setImpl:(id)arg1;
- (void)_setOwningNavigationItem:(id)arg1;
- (void)_wasUsed;
- (SEL)action;
- (id)target;

@end
