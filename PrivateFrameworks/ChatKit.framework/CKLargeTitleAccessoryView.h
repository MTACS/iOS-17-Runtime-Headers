
@interface CKLargeTitleAccessoryView : UIView {
    NSArray * _accessoryButtons;
}

@property (nonatomic, retain) NSArray *accessoryButtons;

+ (id)newComposeButton;
+ (id)newOptionsButton;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)accessoryButtons;
- (void)layoutSubviews;
- (void)setAccessoryButtons:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
