
@protocol PXGViewCoordinatorConfiguration

@required

- (long long)contentInsetAdjustmentBehavior;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (PXMediaProvider *)mediaProvider;
- (unsigned char)presentationType;
- (void)setContentInsetAdjustmentBehavior:(long long)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMediaProvider:(PXMediaProvider *)arg1;
- (void)setPresentationType:(unsigned char)arg1;
- (void)setShouldEmbedContentLayout:(bool)arg1;
- (void)setShouldMoveTungstenViewDuringTransition:(bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (bool)shouldEmbedContentLayout;
- (bool)shouldMoveTungstenViewDuringTransition;
- (bool)showsHorizontalScrollIndicator;
- (bool)showsVerticalScrollIndicator;

@end
