
@protocol HDDeviceKeyValueStoreObserver <NSObject>

@required

- (void)deviceKeyValueStoreDidUpdateForStorageGroup:(NSArray *)arg1 domain:(NSString *)arg2;

@end
