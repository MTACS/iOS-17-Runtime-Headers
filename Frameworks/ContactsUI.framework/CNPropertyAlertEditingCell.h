
@interface CNPropertyAlertEditingCell : CNPropertyAlertCell

+ (bool)wantsHorizontalLayout;

- (bool)allowsCellSelection;
- (double)minCellHeight;
- (id)variableConstraints;

@end
