
@protocol ATXBackupDataProviderDelegate <NSObject>

@required

- (NSDictionary *)filenamesAndDataForBackupShouldPareDown:(bool)arg1 transport:(unsigned long long)arg2;
- (bool)restoreFromBackup:(NSDictionary *)arg1;

@end
