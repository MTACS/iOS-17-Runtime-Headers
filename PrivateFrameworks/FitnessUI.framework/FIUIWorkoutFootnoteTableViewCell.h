
@interface FIUIWorkoutFootnoteTableViewCell : UITableViewCell {
    UIView * _dividerView;
    UILabel * _footnoteLabel;
    NSString * _footnoteText;
    UILabel * _titleLabel;
    NSString * _titleText;
}

@property (nonatomic, copy) NSString *footnoteText;
@property (nonatomic, copy) NSString *titleText;

+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)footnoteText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setFootnoteText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;

@end
