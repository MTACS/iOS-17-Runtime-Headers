
@interface UITableConstants_Watch : UITableConstants_Phone

+ (id)sharedConstants;

- (id)defaultCheckmarkImageForCell:(id)arg1;
- (struct _UITableConstantsBackgroundProperties { bool x1; id x2; id x3; bool x4; long long x5; long long x6; double x7; double x8; bool x9; id x10; long long x11; double x12; struct NSDirectionalEdgeInsets { double x_13_1_1; double x_13_1_2; double x_13_1_3; double x_13_1_4; } x13; })defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 cellConfigurationState:(id)arg2 traitCollection:(id)arg3 floating:(bool)arg4;
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;
- (bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;

@end
