
@protocol CRSIconLayoutVehicleDataProviding <NSObject>

@required

- (void)getApplicationIconInformationForBundleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CRSApplicationIcon *, NSError *, void*
- (void)getIconStateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CRSIconLayoutState *, NSError *, void*
- (void)resetIconState;
- (void)setIconState:(CRSIconLayoutState *)arg1;

@end
