
@protocol _NSLayoutRuleNodeParent <NSObject>

@required

- (void)_addChildRuleNode:(_NSLayoutRuleNode *)arg1;
- (NSArray *)_childRuleNodes;
- (void)_removeChildRuleNode:(_NSLayoutRuleNode *)arg1;

@end
