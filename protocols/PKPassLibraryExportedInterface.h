
@protocol PKPassLibraryExportedInterface

@required

- (void)catalogChanged:(PKCatalog *)arg1 withNewPasses:(NSSet *)arg2;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passAdded:(PKPass *)arg1;
- (void)passRecovered:(PKPass *)arg1;
- (void)passRemoved:(PKPass *)arg1;
- (void)passUpdated:(PKPass *)arg1;
- (void)vehicleConnectionDidRecievePassthroughData:(NSData *)arg1;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)arg1;

@end
