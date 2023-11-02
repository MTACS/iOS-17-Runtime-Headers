
@protocol DDSTrialProvider <NSObject>

@required

- (NSArray *)contentItemsFromAssets:(NSArray *)arg1 matchingFilter:(DDSAttributeFilter *)arg2;
- (void)fetchTrialAssetForQuery:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: DDSTrialQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DDSTrialAsset *, NSError *, void*
- (void)registerDelegate:(id <DDSAssetCenterDelegate>)arg1;
- (void)setUpTrialForQuery:(DDSTrialQuery *)arg1;
- (void)unregisterDelegate:(id <DDSAssetCenterDelegate>)arg1;

@end
