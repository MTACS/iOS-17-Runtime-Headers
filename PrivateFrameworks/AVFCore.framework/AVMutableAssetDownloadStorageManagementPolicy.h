
@interface AVMutableAssetDownloadStorageManagementPolicy : AVAssetDownloadStorageManagementPolicy

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *priority;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)expirationDate;
- (id)priority;
- (void)setExpirationDate:(id)arg1;
- (void)setPriority:(id)arg1;

@end
