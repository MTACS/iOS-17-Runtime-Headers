
@interface SBHStackConfigurationView : UIView {
    <SBHStackConfigurationViewHitTestDelegate> * _delegate;
}

@property (nonatomic) <SBHStackConfigurationViewHitTestDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
