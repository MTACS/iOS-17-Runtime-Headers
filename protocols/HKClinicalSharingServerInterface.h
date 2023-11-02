
@protocol HKClinicalSharingServerInterface

@required

- (void)remote_gatherQueryDiagnosticsWithOptions:(void *)arg1 date:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)remote_scheduleSharingHealthDataWithReason:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_shareHealthDataWithOptions:(void *)arg1 reason:(void *)arg2 date:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: unsigned long long, long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_submitDailyAnalyticsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_submitOnboardingAnalyticsForStepIdentifier:(void *)arg1 context:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_uploadDAIIfNeededWithOptions:(void *)arg1 reason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
