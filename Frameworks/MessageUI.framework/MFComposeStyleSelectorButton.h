
@interface MFComposeStyleSelectorButton : UIButton {
    NSString * _maximumContentSizeCategory;
    long long  _styleType;
}

@property (nonatomic) NSString *maximumContentSizeCategory;
@property (nonatomic, readonly) long long styleType;

+ (id)buttonWithStyleType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)buttonWithStyleType:(long long)arg1 target:(id)arg2 action:(SEL)arg3 maximumContentSizeCategory:(id)arg4;

- (void)_commonInit;
- (id)_imageForTextStyleType:(long long)arg1 maximumContentSizeCategory:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)maximumContentSizeCategory;
- (void)setMaximumContentSizeCategory:(id)arg1;
- (void)setSelected:(bool)arg1;
- (long long)styleType;
- (void)traitCollectionDidChange:(id)arg1;

@end
