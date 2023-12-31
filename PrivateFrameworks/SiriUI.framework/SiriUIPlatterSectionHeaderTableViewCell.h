
@interface SiriUIPlatterSectionHeaderTableViewCell : UITableViewCell {
    SiriUIPlatterSectionHeaderView * _headerView;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;

+ (id)_font;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 text:(id)arg2;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithText:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)text;
- (long long)textAlignment;

@end
