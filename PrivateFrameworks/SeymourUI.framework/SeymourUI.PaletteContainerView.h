
@interface SeymourUI.PaletteContainerView : UIView {
    void backgroundView;
    void containerView;
    void contentInsets;
}

@property (nonatomic, copy) NSArray *interactions;

- (void).cxx_destruct;
- (void)addInteraction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interactions;
- (void)layoutSubviews;
- (void)removeInteraction:(id)arg1;
- (void)setInteractions:(id)arg1;

@end
