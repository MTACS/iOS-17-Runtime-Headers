
@interface MapsSuggestionsRealMapsSyncConnector : NSObject <MapsSuggestionsMapsSyncConnector, MapsSync.MapsSyncDataQueryDelegate> {
    <MapsSuggestionsMapsSyncConnectorDelegate> * _delegate;
    _TtC8MapsSync25MapsSyncFavoriteItemQuery * _favoriteItemQuery;
    _TtC8MapsSync24MapsSyncHistoryItemQuery * _historyQuery;
    _TtC8MapsSync34MapsSyncCollectionTransitItemQuery * _transitItemQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsMapsSyncConnectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1;
- (bool)allContentOfType:(long long)arg1 handler:(id /* block */)arg2;
- (id)delegate;
- (id)init;
- (id)newReviewedPlace;
- (void)queryContentsDidChangeWithQuery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)uniqueName;

@end
