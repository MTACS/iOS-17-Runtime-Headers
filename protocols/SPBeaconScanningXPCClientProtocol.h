
@protocol SPBeaconScanningXPCClientProtocol <NSObject>

@required

- (void)discoveredObject:(SPScannedObject *)arg1;
- (void)discoveryFinished:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
