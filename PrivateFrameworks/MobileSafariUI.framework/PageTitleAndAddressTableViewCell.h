
@interface PageTitleAndAddressTableViewCell : CompletionListTableViewCell

+ (double)defaultHeight;

- (void)_updateFont;
- (void)_updateNumberOfLines;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 address:(id)arg2 prompt:(id)arg3 withQuery:(id)arg4;
- (void)traitCollectionDidChange:(id)arg1;

@end
