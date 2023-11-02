
@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection <HKDataMetadataWorkoutRouteCellDelegate> {
    HKDataMetadataWorkoutRouteCell * _cell;
    HKRouteMapGenerator * _generator;
    HKLocationFetcher * _locationFetcher;
    HKLocationReadings * _locationReadings;
    NSCache * _routeImageCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _tableViewSize;
}

@property (nonatomic, retain) HKDataMetadataWorkoutRouteCell *cell;
@property (nonatomic, retain) HKRouteMapGenerator *generator;
@property (nonatomic, retain) HKLocationFetcher *locationFetcher;
@property (nonatomic, readonly) HKLocationReadings *locationReadings;
@property (nonatomic, retain) NSCache *routeImageCache;
@property (nonatomic) struct CGSize { double x1; double x2; } tableViewSize;

- (void).cxx_destruct;
- (id)_cachedRouteImageForUserInterfaceStyle:(long long)arg1 snapshotSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_generateRouteImageForTraitCollection:(id)arg1;
- (id)cell;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)generateRouteImage;
- (id)generator;
- (id)initWithLocationReadings:(id)arg1 tableViewSize:(struct CGSize { double x1; double x2; })arg2;
- (id)locationFetcher;
- (id)locationReadings;
- (unsigned long long)numberOfRowsInSection;
- (id)routeImageCache;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setCell:(id)arg1;
- (void)setGenerator:(id)arg1;
- (void)setLocationFetcher:(id)arg1;
- (void)setRouteImageCache:(id)arg1;
- (void)setTableViewSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })tableViewSize;
- (void)workoutRouteCell:(id)arg1 didUpdateTraitCollection:(id)arg2;

@end
