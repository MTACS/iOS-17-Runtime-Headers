
@interface CKMacToolbarView : UIView {
    <CKMacToolbarViewDelegate> * _delegate;
}

@property (nonatomic) <CKMacToolbarViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
