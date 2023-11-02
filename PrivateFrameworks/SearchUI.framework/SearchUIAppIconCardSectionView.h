
@interface SearchUIAppIconCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, SearchUIHomeScreenEngagementDelegate> {
    SearchUIHomeScreenAppIconView * _appIconView;
    TLKAuxilliaryTextView * _folderLabelView;
}

@property (retain) SearchUIHomeScreenAppIconView *appIconView;
@property (retain) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TLKAuxilliaryTextView *folderLabelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)appIconView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dealloc;
- (void)didUpdateKeyboardFocusToResult:(id)arg1 cardSection:(id)arg2;
- (id)folderLabelView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)needsInternalFocus;
- (void)removeManualFocus;
- (void)returnKeyPressed;
- (void)setAppIconView:(id)arg1;
- (void)setFolderLabelView:(id)arg1;
- (id)setupContentView;
- (bool)setupManualFocus;
- (void)updateWithRowModel:(id)arg1;
- (id)viewForForcedFocus;
- (void)willRemoveIcon:(id)arg1;

@end
