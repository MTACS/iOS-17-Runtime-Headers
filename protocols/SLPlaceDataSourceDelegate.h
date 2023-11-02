
@protocol SLPlaceDataSourceDelegate <NSObject>

@required

- (void)placeManager:(NSObject<SLPlaceDataSource> *)arg1 failedWithError:(NSError *)arg2;
- (void)placeManager:(NSObject<SLPlaceDataSource> *)arg1 updatedPlaces:(NSArray *)arg2;

@end
