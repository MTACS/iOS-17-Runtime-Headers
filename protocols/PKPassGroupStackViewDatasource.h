
@protocol PKPassGroupStackViewDatasource <NSObject>

@required

- (bool)areGroupsSeparated;
- (PKGroup *)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfGroup:(PKGroup *)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (bool)isInField;
- (unsigned long long)numberOfGroups;
- (bool)supportsExternalPresentation;

@optional

- (void)beginPinningExternalPresentationNavigationHeight;
- (void)endPinningExternalPresentationNavigationHeight;
- (double)externalPresentationNavigationHeight;
- (PKGroup *)featuredGroup;
- (UIView *)footerForGroupStackView:(PKPassGroupStackView *)arg1;
- (UIView<PKPGSVSectionHeaderView> *)groupStackView:(PKPassGroupStackView *)arg1 headerForPassType:(unsigned long long)arg2 withState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg3;
- (bool)groupStackView:(PKPassGroupStackView *)arg1 requiresHeaderForPassType:(unsigned long long)arg2 withState:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; })arg3;
- (NSArray *)groupStackView:(PKPassGroupStackView *)arg1 subheadersWithState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg2;
- (bool)groupStackView:(PKPassGroupStackView *)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2 withState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg3;
- (bool)groupStackView:(PKPassGroupStackView *)arg1 willHaveSubheaderViewsWithState:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; } x1; unsigned int x2 : 1; unsigned int x3 : 1; })arg2;
- (bool)groupStackViewShouldShowHeaderViews:(PKPassGroupStackView *)arg1;

@end
