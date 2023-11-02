
@interface _TVRMAlertButton : UIButton {
    UIView * _burnView;
    UIView * _plusDView;
    bool  _showingBackgroundEffect;
}

@property (nonatomic, retain) UIView *burnView;
@property (nonatomic, retain) UIView *plusDView;
@property (nonatomic) bool showingBackgroundEffect;

- (void).cxx_destruct;
- (id)burnView;
- (void)layoutSubviews;
- (id)plusDView;
- (void)setBurnView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPlusDView:(id)arg1;
- (void)setShowingBackgroundEffect:(bool)arg1;
- (bool)showingBackgroundEffect;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
