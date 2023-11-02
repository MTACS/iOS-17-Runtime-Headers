
@interface AAUIDataclassSpecifierCell : PSTableCell {
    UIImageView * _headerImageView;
    UITextView * _headerSubTitleTextView;
    UILabel * _headerTitleLabel;
}

@property (nonatomic, retain) UIImageView *headerImageView;
@property (nonatomic, retain) UITextView *headerSubTitleTextView;
@property (nonatomic, retain) UILabel *headerTitleLabel;

+ (id)_attributedStringFromSpecifier:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForLinkFromSpecifier:(id)arg1;
+ (id)_subTitleAttributes;
+ (id)_subTitleFont;
+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setupViews;
- (id)headerImageView;
- (id)headerSubTitleTextView;
- (id)headerTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setHeaderImageView:(id)arg1;
- (void)setHeaderSubTitleTextView:(id)arg1;
- (void)setHeaderTitleLabel:(id)arg1;

@end
