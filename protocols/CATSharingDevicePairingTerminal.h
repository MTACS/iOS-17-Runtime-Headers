
@protocol CATSharingDevicePairingTerminal <NSObject>

@required

- (void)beginPairing:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*, id /* block */, void*, void, id /* block */, NSError *, <CATSharingConnection> *, void*
- (CATSharingDevice *)device;
- (void)invalidate;
- (bool)isInvalidated;
- (void)tryPIN:(NSString *)arg1;
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, <CATSharingConnection> *, void*

@end
