
@protocol TLKDescriptionViewDelegate <NSObject>

@optional

- (bool)configureMenuForFootnoteButton:(UIButton *)arg1;
- (bool)configureMenuForTrailingFootnoteButton:(UIButton *)arg1;
- (void)didPressFootnoteButton;
- (void)didPressMoreButton;
- (void)didPressTrailingFootnoteButton:(id)arg1;

@end
