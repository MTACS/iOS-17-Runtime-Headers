
@interface HFCameraItemProvider : HFItemProvider {
    NSMutableSet * _cameraItems;
    id /* block */  _filter;
    HMHome * _home;
    bool  _onlyShowsFavorites;
    HMRoom * _room;
}

@property (nonatomic, retain) NSMutableSet *cameraItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool onlyShowsFavorites;
@property (nonatomic, retain) HMRoom *room;

- (void).cxx_destruct;
- (id /* block */)_favoriteFilter;
- (id /* block */)_roomFilter;
- (id /* block */)_showInHomeDashboardFilter;
- (id)cameraItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (bool)onlyShowsFavorites;
- (id)reloadItems;
- (id)room;
- (void)setCameraItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setOnlyShowsFavorites:(bool)arg1;
- (void)setRoom:(id)arg1;

@end
