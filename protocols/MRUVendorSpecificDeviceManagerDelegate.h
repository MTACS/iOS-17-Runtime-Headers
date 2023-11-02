
@protocol MRUVendorSpecificDeviceManagerDelegate <NSObject>

@required

- (void)vendorSpecificManager:(MRUVendorSpecificDeviceManager *)arg1 deviceNowPlayingInfoDidChange:(DADevice *)arg2;
- (void)vendorSpecificManager:(MRUVendorSpecificDeviceManager *)arg1 deviceStateDidChange:(DADevice *)arg2;
- (void)vendorSpecificManagerDeviceListDidChange:(MRUVendorSpecificDeviceManager *)arg1;

@end
