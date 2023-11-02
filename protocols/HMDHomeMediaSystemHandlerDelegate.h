
@protocol HMDHomeMediaSystemHandlerDelegate <NSObject>

@required

- (void)mediaSystemController:(HMDHomeMediaSystemHandler *)arg1 didRemoveMediaSystem:(NSUUID *)arg2;
- (void)mediaSystemController:(HMDHomeMediaSystemHandler *)arg1 removeAccessories:(NSArray *)arg2 fromAssistantAccessControl:(HMDUser *)arg3;

@end
