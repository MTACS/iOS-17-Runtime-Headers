
@protocol WBSMobileAssetControllerProtocol

@required

- (<WBSMobileAssetControllerDelegate> *)delegate;
- (NSDate *)lastUpdateDate;
- (void)queryURL:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)setDelegate:(id <WBSMobileAssetControllerDelegate>)arg1;
- (void)setLastUpdateDate:(NSDate *)arg1;
- (double)updateInterval;

@end
