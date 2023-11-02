
@protocol CKTranscriptCellProtocol <NSObject>

@required

- (void)addFilter:(CKFullscreenEffectMessageFilter *)arg1;
- (double)associatedItemOffset;
- (void)clearFilters;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignmentRect;
- (double)drawerPercentRevealed;
- (bool)isAnimatingInDarkEffect;
- (bool)isInReplyContext;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForDrawer;
- (BOOL)orientation;
- (void)performHide:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)performInsertion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)performReload:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)performRemoval:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)performReveal:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setAssociatedItemOffset:(double)arg1;
- (void)setContentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawerPercentRevealed:(double)arg1;
- (void)setIsAnimatingInDarkEffect:(bool)arg1;
- (void)setIsInReplyContext:(bool)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setWantsDrawerLayout:(bool)arg1;
- (bool)wantsDrawerLayout;

@end
