
@protocol PXMutableCuratedLibraryFooterController <NSObject>

@required

- (double)footerMaskVerticalOffset;
- (void)setFooterMaskVerticalOffset:(double)arg1;
- (void)setWantsFooterMask:(bool)arg1;
- (void)viewDidAppear;
- (bool)wantsFooterMask;

@end
