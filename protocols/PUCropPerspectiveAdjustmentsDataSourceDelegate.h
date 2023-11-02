
@protocol PUCropPerspectiveAdjustmentsDataSourceDelegate <NSObject>

@required

- (void)adjustmentsDataChanged:(PUCropPerspectiveAdjustmentsDataSource *)arg1;
- (void)didModifyAdjustmentWithLocalizedName:(NSString *)arg1;
- (void)willModifyAdjustment;

@optional

- (PLPhotoEditRenderer *)adjustmentsRenderer:(PUCropPerspectiveAdjustmentsDataSource *)arg1;

@end
