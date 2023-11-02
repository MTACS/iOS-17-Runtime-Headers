
@interface MKSiriInteraction : NSObject {
    int  _action;
    MKMapItem * _mapItem;
    int  _resultIndex;
    GEOSearchCategory * _searchCategory;
    NSString * _searchQueryString;
    int  _target;
}

@property (nonatomic) int action;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) int resultIndex;
@property (nonatomic, retain) GEOSearchCategory *searchCategory;
@property (nonatomic, retain) NSString *searchQueryString;
@property (nonatomic) int target;

+ (id)_siriIntentMurmurHash:(id)arg1;
+ (void)generateHashForNavigationURL:(id)arg1;
+ (id)navigationHash;
+ (void)removeRecentIntentWithPlacemark:(id)arg1;
+ (void)removeRecentIntentWithSearchText:(id)arg1;
+ (void)setNavigationHash:(id)arg1;

- (void).cxx_destruct;
- (bool)_isIntentDeletable;
- (bool)_isStartNavigationAction:(int)arg1;
- (bool)_isValidTargetForNavUI:(int)arg1;
- (void)_navTimerFired:(id)arg1;
- (id)_siriIntentHash:(id)arg1;
- (id)_whiteListedBrowseCategoryActionAsString:(int)arg1;
- (id)_whiteListedNavigationActionAsString:(int)arg1;
- (id)_whiteListedPlaceCardActionAsString:(int)arg1;
- (id)_whiteListedSearchActionAsString:(int)arg1;
- (id)_whiteListedSiriListActionAsString:(int)arg1;
- (int)action;
- (void)donateIfWanted;
- (id)initWithGEOUIAction:(int)arg1 target:(int)arg2 mapItem:(id)arg3 resultIndex:(int)arg4 searchCategory:(id)arg5 searchQueryString:(id)arg6;
- (id)intentIfWanted;
- (id)mapItem;
- (int)resultIndex;
- (id)searchCategory;
- (id)searchQueryString;
- (void)setAction:(int)arg1;
- (void)setMapItem:(id)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setSearchCategory:(id)arg1;
- (void)setSearchQueryString:(id)arg1;
- (void)setTarget:(int)arg1;
- (int)target;

@end
