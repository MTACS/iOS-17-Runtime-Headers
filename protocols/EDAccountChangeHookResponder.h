
@protocol EDAccountChangeHookResponder <NSObject>

@optional

- (void)accountBecameActive:(id <EDAccount>)arg1;
- (void)accountBecameInactive:(id <EDAccount>)arg1;
- (void)accountsAdded:(NSArray *)arg1;
- (void)accountsChanged:(NSArray *)arg1;
- (void)accountsRemoved:(NSArray *)arg1;

@end
