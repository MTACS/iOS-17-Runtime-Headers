
@interface PXCMMProgressBannerView : UIView <PXChangeObserver, UITextViewDelegate> {
    UITextView * _activityTextView;
    UIAlertController * _alertController;
    <PXCMMProgressBannerViewDelegate> * _delegate;
    double  _layoutHeight;
    PXMomentShareStatusPresentation * _momentShareStatusPresentation;
    UILabel * _pauseLabel;
    UIProgressView * _progressView;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMProgressBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double layoutHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateActivityTitle;
- (void)_updatePauseTitle;
- (void)_updateProgress;
- (id)alertController;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMomentShareStatusPresentation:(id)arg1;
- (double)layoutHeight;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setAlertController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
