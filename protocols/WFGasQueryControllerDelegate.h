
@protocol WFGasQueryControllerDelegate

@required

- (WFNetworkProfile *)existingProfileWithSSID:(NSString *)arg1;
- (void)gasQueryController:(WFGasQueryController *)arg1 didUpdateProfiles:(NSArray *)arg2 networkNames:(NSArray *)arg3;

@end
