
@protocol MTSyncDataModel <NSObject>

@required

- (void)applyChange:(id <MTSyncable>)arg1;
- (NSString *)dataFileName;
- (void)resetDataStore;

@end
