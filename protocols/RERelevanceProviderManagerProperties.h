
@protocol RERelevanceProviderManagerProperties <REExportedInterface>

@required

- (NSArray *)allRelevanceProviders;
- (bool)dataSourcesOpened;
- (unsigned long long)scheduledUpdatesCount;

@end
