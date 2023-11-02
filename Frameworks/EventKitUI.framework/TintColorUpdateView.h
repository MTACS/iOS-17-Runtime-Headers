
@interface TintColorUpdateView : UIView {
    UIView<EKUITintColorUpdateDelegate> * _tintColorUpdateDelegate;
}

@property (nonatomic) UIView<EKUITintColorUpdateDelegate> *tintColorUpdateDelegate;

- (void)setTintColorUpdateDelegate:(id)arg1;
- (void)tintColorDidChange;
- (id)tintColorUpdateDelegate;

@end
