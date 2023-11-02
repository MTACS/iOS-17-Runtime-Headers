
@protocol MUNearestStationSectionControllerDelegate <NSObject>

@required

- (void)nearestStationSectionController:(MUNearestStationSectionController *)arg1 didSelectStationAttributionURL:(NSURL *)arg2;
- (void)nearestStationSectionController:(MUNearestStationSectionController *)arg1 didTapStationItem:(MKMapItem *)arg2;

@end
