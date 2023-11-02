
@protocol WFKnownNetworksProvider <NSObject>

@required

- (NSSet *)allEditableNetworkProfiles;
- (NSSet *)allNonEditableNetworkProfiles;
- (NSString *)passwordForNetworksWithSSID:(NSString *)arg1;
- (NSDictionary *)privateAddressConfigForNetworkName:(NSString *)arg1;
- (bool)removeNetworks:(NSArray *)arg1;

@end
