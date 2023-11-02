
@protocol SWContentRuleManager <NSObject>

@required

- (void)addContentRuleList:(NSString *)arg1 identifier:(NSString *)arg2;
- (NFPromise *)configureContentRules;
- (void)removeContentListForIdentifier:(NSString *)arg1;

@end
