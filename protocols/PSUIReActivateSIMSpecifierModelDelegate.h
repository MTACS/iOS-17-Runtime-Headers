
@protocol PSUIReActivateSIMSpecifierModelDelegate <NSObject>

@required

- (void)transferBackCanceled:(id)arg1;
- (void)transferBackFailed:(id)arg1 error:(NSError *)arg2;
- (void)transferBackSuccessFrom:(id)arg1 to:(CTCellularPlanItem *)arg2;

@end
