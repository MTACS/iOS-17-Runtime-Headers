
@interface CNContactDowntimeWhitelistCell : CNContactCell

+ (bool)shouldIndentWhileEditing;

- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
