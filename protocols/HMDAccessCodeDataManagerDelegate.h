
@protocol HMDAccessCodeDataManagerDelegate <NSObject>

@required

- (void)accessCodeDataManager:(HMDAccessCodeDataManager *)arg1 didAddAccessoryAccessCodes:(NSArray *)arg2;
- (void)accessCodeDataManager:(HMDAccessCodeDataManager *)arg1 didAddHomeAccessCodes:(NSArray *)arg2 addedByUserUUID:(NSUUID *)arg3;
- (void)accessCodeDataManager:(HMDAccessCodeDataManager *)arg1 didRemoveAccessoryAccessCodes:(NSArray *)arg2;
- (void)accessCodeDataManager:(HMDAccessCodeDataManager *)arg1 didRemoveHomeAccessCodes:(NSArray *)arg2 removedByUserUUID:(NSUUID *)arg3;
- (void)accessCodeDataManager:(HMDAccessCodeDataManager *)arg1 didUpdateAccessoryAccessCodes:(NSArray *)arg2;
- (void)accessCodeDataManager:(HMDAccessCodeDataManager *)arg1 didUpdateHomeAccessCodes:(NSArray *)arg2 changedByUserUUID:(NSUUID *)arg3;
- (NSUUID *)messageTargetUUID;

@end
