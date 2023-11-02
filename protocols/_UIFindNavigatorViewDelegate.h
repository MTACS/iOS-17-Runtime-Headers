
@protocol _UIFindNavigatorViewDelegate <NSObject>

@required

- (void)findNavigator:(_UIFindNavigatorView *)arg1 didChangeMode:(long long)arg2;
- (void)findNavigator:(_UIFindNavigatorView *)arg1 didInvokeNextResultInDirection:(long long)arg2;
- (void)findNavigator:(_UIFindNavigatorView *)arg1 didInvokeReplaceReplacingAll:(bool)arg2;
- (void)findNavigatorDidInvalidateSearchSession:(_UIFindNavigatorView *)arg1;
- (bool)findNavigatorShouldShowReplacementOption:(_UIFindNavigatorView *)arg1;

@end
