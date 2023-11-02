
@protocol CalContactsProviderDelegate

@required

- (void)contactsInserted:(NSArray *)arg1 updated:(NSArray *)arg2 deleted:(NSArray *)arg3;
- (void)contactsReset;

@end
