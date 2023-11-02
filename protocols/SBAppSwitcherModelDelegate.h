
@protocol SBAppSwitcherModelDelegate <NSObject>

@required

- (void)appSwitcherModel:(SBAppSwitcherModel *)arg1 didRemoveAppLayoutForFallingOffList:(SBAppLayout *)arg2;
- (SBAppLayout *)appSwitcherModel:(SBAppSwitcherModel *)arg1 willAddAppLayout:(SBAppLayout *)arg2 replacingAppLayouts:(NSSet *)arg3 removingAppLayouts:(NSSet *)arg4;
- (SBAppLayout *)appSwitcherModel:(SBAppSwitcherModel *)arg1 willReplaceAppLayout:(SBAppLayout *)arg2 proposedReplacementAppLayout:(SBAppLayout *)arg3;

@end
