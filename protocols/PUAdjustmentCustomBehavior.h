
@protocol PUAdjustmentCustomBehavior <NSObject>

@optional

- (void)dataSource:(PUAdjustmentsDataSource *)arg1 adjustmentInfo:(PUAdjustmentInfo *)arg2 modifyValue:(double)arg3;
- (void)dataSource:(PUAdjustmentsDataSource *)arg1 adjustmentInfo:(PUAdjustmentInfo *)arg2 populateNewAdjustmentController:(PIAdjustmentController *)arg3;
- (void)dataSource:(void *)arg1 adjustmentInfo:(void *)arg2 setEnabled:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: PUAdjustmentsDataSource *, PUAdjustmentInfo *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
