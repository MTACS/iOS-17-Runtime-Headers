
@protocol SAUILayoutSpecifying <NSObject>

@required

- (long long)layoutMode;
- (long long)maximumSupportedLayoutMode;
- (long long)minimumSupportedLayoutMode;
- (long long)preferredLayoutMode;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2;

@optional

- (bool)isInteractiveDismissalEnabled;
- (bool)isMinimalPresentationPossible;
- (bool)isProvidedViewConcentric:(UIView *)arg1 inLayoutMode:(long long)arg2;
- (bool)isRequestingMenuPresentation;
- (<SAUILayoutHosting> *)layoutHost;
- (void)layoutHostContainerViewDidLayoutSubviews:(UIView *)arg1;
- (void)layoutHostContainerViewWillLayoutSubviews:(UIView *)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)setLayoutHost:(id <SAUILayoutHosting>)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsSize:(struct CGSize { double x1; double x2; })arg1 forProvidedView:(UIView *)arg2 inLayoutMode:(long long)arg3;

@end
