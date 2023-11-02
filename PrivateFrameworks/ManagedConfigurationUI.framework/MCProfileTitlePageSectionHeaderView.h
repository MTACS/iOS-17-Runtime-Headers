
@interface MCProfileTitlePageSectionHeaderView : UIView {
    UILabel * _label;
    UIView * _separatorLine;
    NSString * _text;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UIView *separatorLine;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (id)separatorLine;
- (void)setLabel:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
