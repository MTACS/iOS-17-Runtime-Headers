
@protocol HKAuthorizationStoreResetServer <NSObject>

@required

- (void)remote_recalibrateEstimatesForSampleType:(void *)arg1 effectiveDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKSampleType *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resetAuthorizationStatusesForObjects:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(void *)arg1 objectType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, HKObjectType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
