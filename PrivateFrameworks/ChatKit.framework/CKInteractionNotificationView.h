
@interface CKInteractionNotificationView : UIView {
    <CKInteractionNotificationViewDelegate> * _delegate;
    NSArray * _passthroughViews;
}

@property (nonatomic) <CKInteractionNotificationViewDelegate> *delegate;
@property (nonatomic, copy) NSArray *passthroughViews;

- (void).cxx_destruct;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)passthroughViews;
- (void)setDelegate:(id)arg1;
- (void)setPassthroughViews:(id)arg1;

@end
