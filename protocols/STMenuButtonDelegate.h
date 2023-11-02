
@protocol STMenuButtonDelegate <NSObject>

@required

- (void)contextMenuWillDisplayForButton:(STMenuButton *)arg1;
- (void)contextMenuWillEndForButton:(STMenuButton *)arg1;

@end
