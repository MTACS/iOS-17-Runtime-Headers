
@protocol HKHeadphoneAudioExposureControlServer <NSObject>

@required

- (void)remote_fetchDoseLimitWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)remote_fetchInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)remote_insertQuantityWithExposure:(void *)arg1 duration:(void *)arg2 startDate:(void *)arg3 includesNotificationSample:(void *)arg4 synced:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: double, double, NSDate *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_overrideDoseLimit:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_rebuildWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
