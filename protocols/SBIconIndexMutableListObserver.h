
@protocol SBIconIndexMutableListObserver <NSObject>

@required

- (void)list:(SBIconIndexMutableList *)arg1 didAddContainedNodeIdentifiers:(NSSet *)arg2;
- (void)list:(SBIconIndexMutableList *)arg1 didRemoveContainedNodeIdentifiers:(NSSet *)arg2;
- (void)listDidMoveNodes:(SBIconIndexMutableList *)arg1;

@end
