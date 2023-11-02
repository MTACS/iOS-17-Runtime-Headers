
@protocol SBRecentAppLayoutsDelegate <NSObject>

@required

- (void)recentAppLayouts:(SBRecentAppLayouts *)arg1 didRemoveAppLayoutForFallingOffList:(SBAppLayout *)arg2;
- (SBAppLayout *)recentAppLayouts:(SBRecentAppLayouts *)arg1 willAddAppLayout:(SBAppLayout *)arg2 replacingAppLayouts:(NSSet *)arg3 removingAppLayouts:(NSSet *)arg4;
- (SBAppLayout *)recentAppLayouts:(SBRecentAppLayouts *)arg1 willReplaceAppLayout:(SBAppLayout *)arg2 proposedReplacementAppLayout:(SBAppLayout *)arg3;

@end
