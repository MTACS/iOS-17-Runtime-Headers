
@interface TSSharingActivityProvider : NSObject <TSSharingActivityProviderType> {
    void activities;
    void activityItemSources;
    void excludedActivityTypes;
    void linkPresentationSource;
}

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, copy) NSArray *activityItemSources;
@property (nonatomic, readonly) NSArray *activityItems;
@property (nonatomic, copy) NSArray *excludedActivityTypes;
@property (nonatomic, copy) id linkPresentationSource;

- (void).cxx_destruct;
- (id)activities;
- (id)activityItemSources;
- (id)activityItems;
- (id)excludedActivityTypes;
- (id)init;
- (id)initWithActivityItems:(id)arg1 activitySources:(id)arg2 excludedActivityTypes:(id)arg3 linkPresentationSource:(id)arg4;
- (id)linkPresentationSource;
- (void)setActivities:(id)arg1;
- (void)setActivityItemSources:(id)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setLinkPresentationSource:(id)arg1;

@end
