
@protocol PXPlacesGeotaggedItemDataSourceDelegate <NSObject>

@required

- (void)dataSource:(id <PXPlacesGeotaggedItemDataSource>)arg1 didChange:(id <PXPlacesGeotaggedItemDataSourceChange>)arg2;

@end
