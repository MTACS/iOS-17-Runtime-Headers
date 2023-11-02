
@interface TUIAssistantSeparatorView : UIView {
    UIView * _innerSeparatorView;
}

@property (nonatomic, retain) UIView *innerSeparatorView;

+ (id)barButtonItem;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerSeparatorView;
- (void)layoutSubviews;
- (void)setInnerSeparatorView:(id)arg1;

@end
