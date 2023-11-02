
@protocol HDSPSyncedUserDefaults <HKSPUserDefaults>

@required

- (void)hdsp_forceSynchronizeWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)hdsp_setExternalChangeDelegate:(id <HDSPSyncedUserDefaultsExternalChangeDelegate>)arg1;

@end
