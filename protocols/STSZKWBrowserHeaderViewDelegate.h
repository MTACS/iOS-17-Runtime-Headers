
@protocol STSZKWBrowserHeaderViewDelegate <NSObject>

@optional

- (void)headerDidSelectCancelButton:(STSZKWBrowserHeaderView *)arg1;
- (void)headerView:(STSZKWBrowserHeaderView *)arg1 didRequestCompletion:(NSString *)arg2;
- (void)headerView:(STSZKWBrowserHeaderView *)arg1 didSearchFor:(NSString *)arg2;
- (void)headerView:(STSZKWBrowserHeaderView *)arg1 didSelectSuggestionButtonAtIndex:(unsigned long long)arg2;
- (void)headerViewDidDeleteText;
- (void)headerViewDidSelectFeedbackButton:(STSZKWBrowserHeaderView *)arg1;
- (void)headerViewDidSelectSearchButton:(STSZKWBrowserHeaderView *)arg1;

@end
