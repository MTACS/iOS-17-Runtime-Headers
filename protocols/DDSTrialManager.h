
@protocol DDSTrialManager

@required

- (<DDSTrialManagerDelegate> *)delegate;
- (void)fetchTrialAssetForQuery:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: DDSTrialQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DDSTrialAsset *, NSError *, void*
- (void)setDelegate:(id <DDSTrialManagerDelegate>)arg1;
- (void)setUpTrialForQuery:(DDSTrialQuery *)arg1;

@end
