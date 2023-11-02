
@interface AKMarkupBarButtonItem : UIBarButtonItem {
    UIButton * _toggleButton;
    AKMarkupButtonContainerView * _toggleView;
}

@property (nonatomic, retain) UIButton *toggleButton;
@property (nonatomic, retain) AKMarkupButtonContainerView *toggleView;

+ (id)markupBarButtonWithTarget:(id)arg1 action:(SEL)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)setAction:(SEL)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setToggleButton:(id)arg1;
- (void)setToggleView:(id)arg1;
- (id)toggleButton;
- (id)toggleView;

@end
