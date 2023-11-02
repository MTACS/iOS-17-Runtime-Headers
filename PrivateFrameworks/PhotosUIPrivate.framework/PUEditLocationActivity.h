
@interface PUEditLocationActivity : PXActivity <PXPhotosDetailsLocationSearchDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)activityCategory;

- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)locationSearchDataSource:(id)arg1 didSelectLocationSearchResult:(id)arg2;
- (void)locationSearchDataSourceDidRemoveLocation:(id)arg1;

@end
