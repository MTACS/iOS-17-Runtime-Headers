
@interface PXCMMTranscriptBubbleStatusView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bubbleSafeAreaInsets;
    UIImageView * _iconImageView;
    PXRoundedCornerOverlayView * _roundedCornerOverlay;
    bool  _showsActivityIndicator;
    PXCMMSpec * _spec;
    PXCMMTranscriptTextView * _textView;
    PXUpdater * _updater;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bubbleSafeAreaInsets;
@property (nonatomic) bool showsActivityIndicator;
@property (nonatomic, retain) PXCMMSpec *spec;
@property (nonatomic, copy) NSString *statusDescription;
@property (nonatomic, copy) NSString *statusTitle;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInSize:(struct CGSize { double x1; double x2; })arg1 minimizingSize:(bool)arg2 updateSubviewFrames:(bool)arg3;
- (void)_updateActivityIndicator;
- (void)_updateRoundedCornerOverlayView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bubbleSafeAreaInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBubbleSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsActivityIndicator:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setStatusDescription:(id)arg1;
- (void)setStatusTitle:(id)arg1;
- (bool)showsActivityIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spec;
- (id)statusDescription;
- (id)statusTitle;

@end
