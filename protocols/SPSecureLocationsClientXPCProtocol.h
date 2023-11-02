
@protocol SPSecureLocationsClientXPCProtocol <NSObject>

@required

- (void)clearLocationsForFailedSubscriptions:(NSArray *)arg1;
- (void)receivedUpdatedLocations:(NSArray *)arg1;
- (void)stewieServiceStateChanged:(long long)arg1;

@end
