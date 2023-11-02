
@protocol WFScanManagerScanProxy

@required

- (void)initiateNoNetworksSoftError;
- (bool)isScanningAllowed;
- (void)performScanWithRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: WFScanRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSSet *, void*
- (double)scanInterval;
- (NSArray *)scannableChannels;

@end
