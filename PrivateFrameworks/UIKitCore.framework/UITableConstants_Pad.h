
@interface UITableConstants_Pad : UITableConstants_IOS

+ (id)sharedConstants;

- (struct _UITableConstantsBackgroundProperties { bool x1; id x2; id x3; bool x4; long long x5; long long x6; double x7; double x8; bool x9; id x10; long long x11; double x12; struct NSDirectionalEdgeInsets { double x_13_1_1; double x_13_1_2; double x_13_1_3; double x_13_1_4; } x13; })defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
- (double)defaultRowHeightForTableView:(id)arg1;
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;
- (struct _UITableConstantsBackgroundProperties { bool x1; id x2; id x3; bool x4; long long x5; long long x6; double x7; double x8; bool x9; id x10; long long x11; double x12; struct NSDirectionalEdgeInsets { double x_13_1_1; double x_13_1_2; double x_13_1_3; double x_13_1_4; } x13; })defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(bool)arg3;
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;
- (bool)supportsUserInterfaceStyles;

@end
