
@protocol UIDebuggingInformationHierarchyCellDelegate

@required

- (void)collapseBeneathCell:(UIDebuggingInformationHierarchyCell *)arg1;
- (void)displayDetailsForCell:(UIDebuggingInformationHierarchyCell *)arg1;
- (void)expandBeneathCell:(UIDebuggingInformationHierarchyCell *)arg1;
- (bool)shouldHighlightSelectedCells;

@end
