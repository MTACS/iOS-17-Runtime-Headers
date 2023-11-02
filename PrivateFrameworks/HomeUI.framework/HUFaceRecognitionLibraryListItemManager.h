
@interface HUFaceRecognitionLibraryListItemManager : HFItemManager {
    HFItem * _allowFacialRecognitionItem;
    NSArray * _coalescedPersonEvents;
    HFDemoModeFaceRecognitionDataSource * _demoDataSource;
    bool  _didSendAnalyticsEvent;
    HFStaticItem * _knownToHomeItem;
    HMHome * _overrideHome;
    HFItemProvider * _recentEventsItemProvider;
    unsigned long long  _recentsLimit;
    HFStaticItemProvider * _staticItemProvider;
    HFUserPhotosLibraryItemProvider * _userPhotosLibraryItemProvider;
}

@property (nonatomic, retain) HFItem *allowFacialRecognitionItem;
@property (nonatomic, retain) NSArray *coalescedPersonEvents;
@property (nonatomic, retain) HFDemoModeFaceRecognitionDataSource *demoDataSource;
@property (nonatomic) bool didSendAnalyticsEvent;
@property (nonatomic, retain) HFStaticItem *knownToHomeItem;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, retain) HFItemProvider *recentEventsItemProvider;
@property (nonatomic) unsigned long long recentsLimit;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, retain) HFUserPhotosLibraryItemProvider *userPhotosLibraryItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)allowFacialRecognitionItem;
- (id)coalescedPersonEvents;
- (id)demoDataSource;
- (bool)didSendAnalyticsEvent;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (id)knownToHomeItem;
- (id)overrideHome;
- (id)recentEventsItemProvider;
- (unsigned long long)recentsLimit;
- (void)sendAnalyticsEvent;
- (void)setAllowFacialRecognitionItem:(id)arg1;
- (void)setCoalescedPersonEvents:(id)arg1;
- (void)setDemoDataSource:(id)arg1;
- (void)setDidSendAnalyticsEvent:(bool)arg1;
- (void)setKnownToHomeItem:(id)arg1;
- (void)setRecentEventsItemProvider:(id)arg1;
- (void)setRecentsLimit:(unsigned long long)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (void)setUserPhotosLibraryItemProvider:(id)arg1;
- (id)staticItemProvider;
- (id)userPhotosLibraryItemProvider;

@end
