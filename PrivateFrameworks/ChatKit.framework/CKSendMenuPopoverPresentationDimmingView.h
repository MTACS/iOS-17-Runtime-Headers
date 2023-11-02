
@interface CKSendMenuPopoverPresentationDimmingView : UIView {
    bool  _active;
    <CKSendMenuPopoverPresentationDimmingViewDelegate> * _delegate;
    UITapGestureRecognizer * _dismissGestureRecognizer;
}

@property (getter=isActive, setter=setActive:, nonatomic) bool active;
@property (nonatomic) <CKSendMenuPopoverPresentationDimmingViewDelegate> *delegate;
@property (nonatomic, retain) UITapGestureRecognizer *dismissGestureRecognizer;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (id)delegate;
- (id)dismissGestureRecognizer;
- (id)init;
- (bool)isActive;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissGestureRecognizer:(id)arg1;

@end
