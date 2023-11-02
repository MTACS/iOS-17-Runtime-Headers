
@interface SeymourUI.TVRootShowcaseCarouselContainerCell : UICollectionViewCell <SMUTVCarouselViewDataSource, SMUTVCarouselViewDelegate> {
    void carouselView;
    void delegate;
    void impressionElements;
    void isUpdatingImpression;
    void itemCellIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void items;
    void layout;
    void leftArrowButton;
    void onElementAppearance;
    void onElementDisappearance;
    void onImpressionableBoundsChange;
    void onVisibleBoundsChange;
    void pageControl;
    void preferredCenterIndex;
    void rightArrowButton;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (void)carouselView:(id)arg1 didCenterItemAtIndex:(long long)arg2;
- (void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)didMoveToWindow;
- (long long)indexForPreferredCenteredViewInCarouselView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfItemsInCarouselView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;

@end
