
@protocol BLTSectionInfoListProviderDelegate <NSObject>

@required

- (void)removedSectionWithSectionID:(NSString *)arg1 transaction:(BLTTransaction *)arg2;
- (void)updateOverrides:(NSDictionary *)arg1 forSectionID:(NSString *)arg2 transaction:(BLTTransaction *)arg3;
- (void)updateSectionInfoForSectionIDs:(NSArray *)arg1 transaction:(BLTTransaction *)arg2;

@end
