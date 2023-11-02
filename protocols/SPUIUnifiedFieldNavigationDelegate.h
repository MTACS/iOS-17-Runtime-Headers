
@protocol SPUIUnifiedFieldNavigationDelegate <NSObject>

@required

- (void)resetSearchFieldContentWithSearchToken:(UISearchToken *)arg1 text:(NSString *)arg2 wantsBackButton:(bool)arg3 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg4;

@end
