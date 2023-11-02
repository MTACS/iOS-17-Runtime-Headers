
@protocol TSSharingActivityProviderType

@required

- (NSArray *)activities;
- (NSArray *)activityItemSources;
- (NSArray *)activityItems;
- (NSArray *)excludedActivityTypes;
- (id)linkPresentationSource;

@end
