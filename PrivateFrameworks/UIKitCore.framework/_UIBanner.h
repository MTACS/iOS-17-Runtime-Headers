
@interface _UIBanner : NSObject <_UIBanner> {
    _UIBannerContent * _content;
    NSMutableArray * _dismissalAnimations;
    NSMutableArray * _dismissalCompletionHandlers;
    NSLayoutConstraint * _hiddenConstraint;
    _UIBannerManager * _manager;
    long long  _state;
    NSMutableArray * _tapHandlers;
    _UIBannerView * _view;
    NSLayoutConstraint * _visibleConstraint;
}

@property (nonatomic, retain) _UIBannerContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *dismissalAnimations;
@property (nonatomic, retain) NSMutableArray *dismissalCompletionHandlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *hiddenConstraint;
@property (nonatomic) _UIBannerManager *manager;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *tapHandlers;
@property (nonatomic, retain) _UIBannerView *view;
@property (nonatomic, retain) NSLayoutConstraint *visibleConstraint;

- (void).cxx_destruct;
- (void)addDismissalAnimations:(id /* block */)arg1;
- (void)addDismissalCompletionHandler:(id /* block */)arg1;
- (void)addTapHandler:(id /* block */)arg1;
- (id)content;
- (void)dismiss;
- (id)dismissalAnimations;
- (id)dismissalCompletionHandlers;
- (void)handleLongPressGesture:(id)arg1;
- (id)hiddenConstraint;
- (id)manager;
- (void)present;
- (void)setContent:(id)arg1;
- (void)setDismissalAnimations:(id)arg1;
- (void)setDismissalCompletionHandlers:(id)arg1;
- (void)setHiddenConstraint:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTapHandlers:(id)arg1;
- (void)setView:(id)arg1;
- (void)setVisibleConstraint:(id)arg1;
- (long long)state;
- (id)tapHandlers;
- (id)view;
- (id)visibleConstraint;

@end
