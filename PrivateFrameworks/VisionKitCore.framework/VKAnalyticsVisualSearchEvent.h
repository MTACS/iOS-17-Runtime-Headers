
@interface VKAnalyticsVisualSearchEvent : VKAnalyticsEvent {
    NSCountedSet * _allItemDomains;
    bool  _didInteractWithResultItem;
    long long  _eventType;
    long long  _focalPointItemCount;
    VKCVisualSearchResultItem * _interactedItem;
    long long  _itemCount;
    double  _serverProcessingTime;
    bool  _serverResultWasCached;
}

@property (nonatomic, retain) NSCountedSet *allItemDomains;
@property (nonatomic) bool didInteractWithResultItem;
@property (nonatomic) long long eventType;
@property (nonatomic) long long focalPointItemCount;
@property (nonatomic, retain) VKCVisualSearchResultItem *interactedItem;
@property (nonatomic) long long itemCount;
@property (nonatomic, readonly) NSString *itemDomain;
@property (nonatomic, readonly) bool itemHasFocalPoint;
@property (nonatomic, readonly) long long nonFocalPointItemCount;
@property (nonatomic) double serverProcessingTime;
@property (nonatomic) bool serverResultWasCached;

- (void).cxx_destruct;
- (id)allItemDomains;
- (id)coreAnalyticsDictionary;
- (id)description;
- (bool)didInteractWithResultItem;
- (id)eventKey;
- (long long)eventType;
- (long long)focalPointItemCount;
- (id)initWithType:(long long)arg1 items:(id)arg2 interactedItem:(id)arg3 serverProcessingTime:(double)arg4 customIdentifier:(id)arg5;
- (id)interactedItem;
- (long long)itemCount;
- (id)itemDomain;
- (bool)itemHasFocalPoint;
- (long long)nonFocalPointItemCount;
- (void)processItems:(id)arg1;
- (double)serverProcessingTime;
- (bool)serverResultWasCached;
- (void)setAllItemDomains:(id)arg1;
- (void)setDidInteractWithResultItem:(bool)arg1;
- (void)setEventType:(long long)arg1;
- (void)setFocalPointItemCount:(long long)arg1;
- (void)setInteractedItem:(id)arg1;
- (void)setItemCount:(long long)arg1;
- (void)setServerProcessingTime:(double)arg1;
- (void)setServerResultWasCached:(bool)arg1;
- (long long)type;

@end
