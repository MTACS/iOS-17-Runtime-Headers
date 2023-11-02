
@interface HUTimerCancelButtonView : UIView {
    UIButton * _cancelButton;
    UIView * _circleBackgroundView;
    <HUTimerCancelDelegate> * _delegate;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) UIView *circleBackgroundView;
@property (nonatomic, retain) <HUTimerCancelDelegate> *delegate;

- (void).cxx_destruct;
- (void)_cancelTimer:(id)arg1;
- (id)cancelButton;
- (id)circleBackgroundView;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setCancelButton:(id)arg1;
- (void)setCircleBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
