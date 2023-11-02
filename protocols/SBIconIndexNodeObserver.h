
@protocol SBIconIndexNodeObserver <NSObject>

@required

- (void)node:(id <SBIconIndexNode>)arg1 didAddContainedNodeIdentifiers:(NSSet *)arg2;
- (void)node:(id <SBIconIndexNode>)arg1 didRemoveContainedNodeIdentifiers:(NSSet *)arg2;
- (void)nodeDidMoveContainedNodes:(id <SBIconIndexNode>)arg1;

@end
