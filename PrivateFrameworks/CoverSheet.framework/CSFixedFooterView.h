
@interface CSFixedFooterView : CSCoverSheetViewBase {
    SBUILegibilityLabel * _alternateCallToActionLabel;
    SBUICallToActionLabel * _callToActionLabel;
    CSShakableView * _callToActionShakeView;
    _UILegibilitySettings * _legibilitySettings;
    CSPageControl * _pageControl;
    UIView<SBUILegibility> * _statusTextView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _statusTextViewOffset;
    double  _statusTextViewScale;
    SBFPagedScrollView * _trackingScrollViewForPageControl;
}

@property (nonatomic, retain) SBUILegibilityLabel *alternateCallToActionLabel;
@property (nonatomic, retain) SBUICallToActionLabel *callToActionLabel;
@property (nonatomic, readonly) CSShakableView *callToActionShakeView;
@property (nonatomic, readonly) CSPageControl *pageControl;
@property (nonatomic, retain) UIView<SBUILegibility> *statusTextView;
@property (nonatomic) struct CGPoint { double x1; double x2; } statusTextViewOffset;
@property (nonatomic) double statusTextViewScale;
@property (nonatomic) SBFPagedScrollView *trackingScrollViewForPageControl;

- (void).cxx_destruct;
- (void)_addPageControl;
- (void)_addShakeView;
- (void)_layoutCallToActionView;
- (void)_layoutPageControl;
- (void)_layoutStatusTextView;
- (void)_updateViewsForLegibilitySettings;
- (id)alternateCallToActionLabel;
- (id)callToActionLabel;
- (id)callToActionShakeView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pageControl;
- (id)presentationRegions;
- (void)setAlternateCallToActionLabel:(id)arg1;
- (void)setCallToActionLabel:(id)arg1;
- (void)setStatusTextView:(id)arg1;
- (void)setStatusTextViewOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStatusTextViewOffset:(struct CGPoint { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setStatusTextViewScale:(double)arg1;
- (void)setTrackingScrollViewForPageControl:(id)arg1;
- (id)statusTextView;
- (struct CGPoint { double x1; double x2; })statusTextViewOffset;
- (double)statusTextViewScale;
- (id)trackingScrollViewForPageControl;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)updatePageControl;

@end
