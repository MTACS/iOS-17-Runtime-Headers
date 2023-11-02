
@protocol SearchUIKeyboardableTableViewDelegate <NSObject>

@required

- (void)didBeginScrolling;
- (void)didFocusOnCell:(UIView *)arg1;
- (void)didScrollPastBottomOfContent;
- (void)setShouldMonitorScrollingPastBottomOfContent:(bool)arg1;
- (bool)shouldMonitorScrollingPastBottomOfContent;

@optional

- (void)didUpdateKeyboardFocusToResult:(SFSearchResult *)arg1 cardSection:(SFCardSection *)arg2;

@end
