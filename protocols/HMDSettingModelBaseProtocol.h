
@protocol HMDSettingModelBaseProtocol <NSObject>

@required

- (id)copyWithNewParentModelID:(NSUUID *)arg1;
- (NSUUID *)hmbModelID;
- (NSUUID *)hmbParentModelID;
- (NSString *)nameForKeyPath;

@end
