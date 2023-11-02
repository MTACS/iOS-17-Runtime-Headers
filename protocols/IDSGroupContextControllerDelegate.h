
@protocol IDSGroupContextControllerDelegate <NSObject>

@required

- (NSDictionary *)groupContextController:(IDSGroupContextController *)arg1 accountsForAlises:(NSSet *)arg2;
- (void)groupContextController:(IDSGroupContextController *)arg1 didCreateGroup:(ENGroup *)arg2;

@end
