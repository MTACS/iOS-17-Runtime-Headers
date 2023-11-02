
@protocol UIDebuggingInformationHierarchyLayoutDelegate

@required

- (UIColor *)colorForIndentationLevel:(unsigned long long)arg1;
- (unsigned long long)indentationLevelForIndexPath:(NSIndexPath *)arg1;
- (bool)shouldCollapseAtIndexPath:(NSIndexPath *)arg1;

@end
