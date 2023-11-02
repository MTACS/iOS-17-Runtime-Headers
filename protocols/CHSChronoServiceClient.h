
@protocol CHSChronoServiceClient <NSObject>

@optional

- (void)nearbyDevicesDidChange:(NSArray *)arg1;
- (void)widgetExtensionsDidChange:(NSSet *)arg1;
- (void)widgetRelevanceEntriesDidChange:(NSDictionary *)arg1;

@end
