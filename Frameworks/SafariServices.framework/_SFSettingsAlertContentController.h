
@interface _SFSettingsAlertContentController : UIViewController <SFSettingsAlertItemViewDelegate, UIGestureRecognizerDelegate> {
    _SFSettingsAlertController * _alertController;
    UIControl * _controlHighlightedForPan;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    _SFSettingsAlertItem * _focusedItem;
    NSArray * _focusedItemConstraints;
    NSMutableIndexSet * _groupStartIndices;
    NSMutableArray * _items;
    UIView * _lastViewForAlignment;
    UIScrollView * _scrollView;
    UIStackView * _stackView;
    NSArray * _stackViewTopBottomConstraints;
    NSLayoutConstraint * _stackViewWidthConstraint;
    bool  _updatePreferredContentSizeAfterLayout;
    bool  _updateScrollPositionAfterLayout;
    bool  _usesReverseOrder;
}

@property (nonatomic) _SFSettingsAlertController *alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFSettingsAlertItem *focusedItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic) bool usesReverseOrder;

- (void).cxx_destruct;
- (void)_addGroupSeparatorIfNeededBeforeItemAtIndex:(unsigned long long)arg1;
- (void)_addViewForItem:(id)arg1;
- (void)_alignButtonImageView:(id)arg1;
- (id)_createViewForItem:(id)arg1;
- (void)_panRecognized:(id)arg1;
- (void)_scrollToBottomIfNeeded;
- (void)_stepperValueChanged:(id)arg1;
- (void)_tappedItemView:(id)arg1;
- (void)_updateFocusedItemConstraints;
- (void)_updatePreferredContentSize;
- (void)_updateSeparators;
- (void)addDivider;
- (void)addItem:(id)arg1;
- (id)alertController;
- (void)alertItemViewContentSizeDidChange:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)focusedItem;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)items;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeAllItems;
- (void)resizeMenu;
- (void)setAlertController:(id)arg1;
- (void)setFocusedItem:(id)arg1;
- (void)setUsesReverseOrder:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usesReverseOrder;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
