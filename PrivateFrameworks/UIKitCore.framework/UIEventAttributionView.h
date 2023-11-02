
@interface UIEventAttributionView : UIView

+ (id)lastEventMessage;
+ (void)setLastEventMessage:(id)arg1;

- (void)_commonInit;
- (void)_updateLayerContents;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;

@end
