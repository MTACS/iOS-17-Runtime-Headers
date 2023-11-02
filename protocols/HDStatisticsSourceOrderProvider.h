
@protocol HDStatisticsSourceOrderProvider <NSObject>

@required

- (NSString *)bundleIdentifierForSourceID:(long long)arg1;
- (void)orderSourceIDs:(void*)arg1;
- (HKSource *)sourceForSourceID:(long long)arg1;

@end
