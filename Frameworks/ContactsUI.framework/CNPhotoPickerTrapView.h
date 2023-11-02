
@interface CNPhotoPickerTrapView : UIView {
    NSArray * _constraints;
    UILabel * _label;
}

@property (retain) NSArray *constraints;
@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (id)constraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setConstraints:(id)arg1;
- (void)setLabel:(id)arg1;

@end
