
@protocol AXElementGroupingTransformationPass <NSObject>

@required

- (bool)shouldTransformGroup:(AXElementGroup *)arg1 forGrouper:(AXElementGrouper *)arg2;
- (AXElementGroup *)transformGroup:(AXElementGroup *)arg1 forGrouper:(AXElementGrouper *)arg2;

@end
