
@protocol PKPassLibraryDelegate <NSObject>

@optional

- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passLibrary:(PKPassLibrary *)arg1 receivedUpdatedCatalog:(PKCatalog *)arg2 passes:(NSSet *)arg3;
- (void)passLibraryReceivedInterruption;
- (void)vehicleConnectionDidRecievePassthroughData:(NSData *)arg1;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)arg1;

@end
