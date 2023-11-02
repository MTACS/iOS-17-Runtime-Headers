
@protocol MEContentRuleListManagerObserver <NSObject>

@required

- (void)contentRuleListManager:(MEContentRuleListManager *)arg1 didAddRuleList:(WKContentRuleList *)arg2;
- (void)contentRuleListManager:(MEContentRuleListManager *)arg1 didRemoveRuleList:(WKContentRuleList *)arg2;
- (void)contentRuleListManager:(MEContentRuleListManager *)arg1 didUpdateContentRuleList:(WKContentRuleList *)arg2 oldContentRuleList:(WKContentRuleList *)arg3;

@end
