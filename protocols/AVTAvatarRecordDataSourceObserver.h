
@protocol AVTAvatarRecordDataSourceObserver <NSObject>

@optional

- (void)dataSource:(AVTPAvatarRecordDataSource *)arg1 didAddRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(AVTPAvatarRecordDataSource *)arg1 didEditRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(AVTPAvatarRecordDataSource *)arg1 didRemoveRecord:(id <AVTAvatarRecord>)arg2 atIndex:(unsigned long long)arg3;
- (void)significantRecordChangeInDataSource:(AVTPAvatarRecordDataSource *)arg1;

@end
