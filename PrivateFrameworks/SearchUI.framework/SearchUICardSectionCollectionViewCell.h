
@interface SearchUICardSectionCollectionViewCell : SearchUICollectionViewCell <VRXInteractionDelegate> {
    NUIContainerBoxView * _boxView;
    SearchUICardSectionView * _cardSectionView;
}

@property (retain) NUIContainerBoxView *boxView;
@property (retain) SearchUICardSectionView *cardSectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_preferredSeparatorInsetsForProposedInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)boxView;
- (id)cardSectionView;
- (void)createButtons:(id)arg1 :(id /* block */)arg2;
- (id)embeddedViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightFrame;
- (bool)highlightFrameMatchesHighlightView;
- (id)highlightReferenceView;
- (id)leadingTextView;
- (id)leadingView;
- (bool)needsInternalFocus;
- (void)removeManualFocus;
- (void)returnKeyPressed;
- (void)setBoxView:(id)arg1;
- (void)setCardSectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setupManualFocus;
- (id)sizingView;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;
- (id)viewForForcedFocus;

@end
