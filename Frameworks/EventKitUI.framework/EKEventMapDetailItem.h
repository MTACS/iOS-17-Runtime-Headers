
@interface EKEventMapDetailItem : EKEventDetailItem {
    bool  _animationHasRan;
    EKEventMapCell * _cell;
    bool  _hasMapItemLaunchOptionFromTimeToLeaveNotification;
    UIView * _loadingView;
    NSArray * _loadingViewConstraints;
    CLLocation * _location;
    MKMapItemView * _mapView;
    NSArray * _mapViewConstraints;
    EKEventMapCell * _oldCell;
}

@property (nonatomic) bool hasMapItemLaunchOptionFromTimeToLeaveNotification;

- (void).cxx_destruct;
- (void)_animateMapIfNeededWithPresentingController:(id)arg1 presentingView:(id)arg2;
- (void)_loadMapItem:(id)arg1;
- (double)_mapHeight;
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2;
- (void)_setupCell;
- (void)_setupCellAsEmpty;
- (void)_setupCellWithMapView;
- (bool)_shouldShowMapView;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(bool)arg3;
- (void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2;
- (bool)hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (void)refreshCopiedEvents;
- (void)reset;
- (void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(bool)arg1;
- (void)setupMapView;
- (void)updateViewColors;

@end
