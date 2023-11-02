
@protocol UIActivityItemsConfigurationReading <NSObject>

@required

- (NSArray *)itemProvidersForActivityItemsConfiguration;

@optional

- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(NSString *)arg2;
- (id)activityItemsConfigurationMetadataForKey:(NSString *)arg1;
- (NSItemProvider *)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(NSString *)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)activityItemsConfigurationSupportsInteraction:(NSString *)arg1;
- (NSArray *)applicationActivitiesForActivityItemsConfiguration;

@end
