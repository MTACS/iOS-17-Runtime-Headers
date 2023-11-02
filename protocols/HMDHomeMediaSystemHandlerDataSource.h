
@protocol HMDHomeMediaSystemHandlerDataSource <NSObject, HMDMediaSystemDataSource>

@required

- (HMDBackingStore *)backingStore;
- (HMDAppleMediaAccessory *)mediaSystemController:(HMDHomeMediaSystemHandler *)arg1 accessoryForUUID:(NSUUID *)arg2;

@end
