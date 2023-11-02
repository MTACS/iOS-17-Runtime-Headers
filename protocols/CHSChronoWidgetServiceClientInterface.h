
@protocol CHSChronoWidgetServiceClientInterface <NSObject>

@required

- (oneway void)nearbyDevicesDidChange:(CHSRemoteDevicesBox *)arg1;
- (oneway void)widgetExtensionsDidChange:(CHSWidgetExtensionsBox *)arg1;
- (oneway void)widgetRelevanceEntriesDidChange:(CHSRelevanceEntryBox *)arg1;

@end
