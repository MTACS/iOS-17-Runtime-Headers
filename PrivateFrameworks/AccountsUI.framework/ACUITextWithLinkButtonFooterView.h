
@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView> {
    NSString * _footerText;
    NSArray * _linkButtons;
    UILabel * _textLabel;
}

- (void).cxx_destruct;
- (double)_heightForEmptyLineConstrainedToWidth:(double)arg1;
- (double)_heightForFooterTextConstrainedToWidth:(double)arg1;
- (double)_heightForLinkButton:(id)arg1 constrainedToWidth:(double)arg2;
- (id)initWithSpecifier:(id)arg1;
- (id)initWithText:(id)arg1 linkButton:(id)arg2;
- (id)initWithText:(id)arg1 linkButtons:(id)arg2;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;

@end
