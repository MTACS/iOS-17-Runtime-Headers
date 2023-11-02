
@interface WFIconHostingView : UIView {
    void hostingView;
    void icon;
    void iconSize;
    void useAccentColor;
}

@property (nonatomic, retain) WFIcon *icon;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic) bool useAccentColor;

+ (id)renderIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)icon;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)setIcon:(id)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseAccentColor:(bool)arg1;
- (bool)useAccentColor;

@end
