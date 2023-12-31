
@protocol PLAssetContainer <NSObject, PLDiagnosticsProvider>

@required

- (unsigned long long)approximateCount;
- (NSOrderedSet *)assets;
- (unsigned long long)assetsCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (bool)isEmpty;
- (PLManagedAsset *)keyAsset;
- (NSArray *)localizedLocationNames;
- (NSString *)localizedTitle;
- (unsigned long long)photosCount;
- (PLManagedAsset *)secondaryKeyAsset;
- (void)setKeyAsset:(PLManagedAsset *)arg1;
- (void)setSecondaryKeyAsset:(PLManagedAsset *)arg1;
- (void)setTertiaryKeyAsset:(PLManagedAsset *)arg1;
- (PLManagedAsset *)tertiaryKeyAsset;
- (NSString *)title;
- (NSString *)uuid;
- (unsigned long long)videosCount;

@optional

+ (NSString *)entityName;

- (NSDate *)endDate;
- (NSDate *)startDate;

@end
