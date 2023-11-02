
@protocol HKHRCardioFitnessStoreServer <NSObject>

@required

- (void)remote_saveCardioFitnessAlertWithValue:(void *)arg1 threshold:(void *)arg2 startDate:(void *)arg3 endDate:(void *)arg4 options:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: HKQuantity *, HKQuantity *, NSDate *, NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
