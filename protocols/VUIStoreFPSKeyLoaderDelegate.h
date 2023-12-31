
@protocol VUIStoreFPSKeyLoaderDelegate <NSObject>

@optional

- (void)storeFPSKeyLoader:(VUIStoreFPSKeyLoader *)arg1 didLoadOfflineKeyData:(NSData *)arg2 forKeyRequest:(TVPContentKeyRequest *)arg3;
- (void)storeFPSKeyLoader:(VUIStoreFPSKeyLoader *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2 playbackStartDate:(NSDate *)arg3;
- (bool)storeFPSKeyLoader:(VUIStoreFPSKeyLoader *)arg1 shouldKeyRequestContinueInvalidationAfterLoadingNonce:(TVPContentKeyRequest *)arg2;
- (void)storeFPSKeyLoader:(VUIStoreFPSKeyLoader *)arg1 willFailWithError:(NSError *)arg2 forKeyRequest:(TVPContentKeyRequest *)arg3;
- (void)storeFPSKeyLoader:(VUIStoreFPSKeyLoader *)arg1 willSucceedForKeyRequest:(TVPContentKeyRequest *)arg2;

@end
