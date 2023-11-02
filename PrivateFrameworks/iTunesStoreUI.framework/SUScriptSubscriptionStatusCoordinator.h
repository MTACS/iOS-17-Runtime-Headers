
@interface SUScriptSubscriptionStatusCoordinator : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)invalidateLastKnownStatus;
- (id)scriptAttributeKeys;

@end
