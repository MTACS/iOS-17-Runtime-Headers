
@protocol HAP2PairedAccessoryServerDelegate <HAP2AccessoryServerDelegate>

@optional

- (void)accessoryServer:(id <HAP2PairedAccessoryServer>)arg1 didFailToUpdateAccessoriesWithError:(NSError *)arg2;
- (void)accessoryServerDidBecomeUnpaired:(id <HAP2PairedAccessoryServer>)arg1;
- (void)accessoryServerDidUpdateAccessories:(id <HAP2PairedAccessoryServer>)arg1;

@end
