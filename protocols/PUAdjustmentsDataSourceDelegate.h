
@protocol PUAdjustmentsDataSourceDelegate <NSObject>

@required

- (void)adjustmentsDataChanged:(PUAdjustmentsDataSource *)arg1;
- (void)autoEnhanceActionStateChanged;
- (void)didModifyAdjustmentWithLocalizedName:(NSString *)arg1;
- (void)willModifyAdjustment;

@optional

- (PLPhotoEditRenderer *)adjustmentsRenderer:(PUAdjustmentsDataSource *)arg1;

@end
