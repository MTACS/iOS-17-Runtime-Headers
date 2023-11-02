
@interface _UITableViewCellBadge : UIView {
    UILabel * _badgeTextLabel;
    bool  _selected;
}

@property (nonatomic, retain) UILabel *badgeTextLabel;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIFont *font;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_sizeToFit;
- (id)badgeTextLabel;
- (id)color;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (double)minHeight;
- (void)setBadgeTextLabel:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end
