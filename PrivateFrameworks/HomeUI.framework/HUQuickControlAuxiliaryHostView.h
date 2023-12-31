
@interface HUQuickControlAuxiliaryHostView : UIView {
    UIView<HUQuickControlAuxiliaryView> * _auxiliaryView;
}

@property (nonatomic, retain) UIView<HUQuickControlAuxiliaryView> *auxiliaryView;

- (void).cxx_destruct;
- (id)auxiliaryView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAuxiliaryView:(id)arg1;
- (void)updateConstraints;

@end
