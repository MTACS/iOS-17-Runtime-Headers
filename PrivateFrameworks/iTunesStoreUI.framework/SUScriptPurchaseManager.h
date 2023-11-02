
@interface SUScriptPurchaseManager : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_purchaseRequestsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)isPurchasedItemIdentifier:(id)arg1;
- (id)isPurchasingItemIdentifier:(id)arg1;

@end
