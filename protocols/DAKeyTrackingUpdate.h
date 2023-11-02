
@protocol DAKeyTrackingUpdate <NSObject>

@required

- (void)endPointPrivacyDecryption:(void *)arg1 encryptedData:(void *)arg2 publicKey:(void *)arg3 callback:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSError *)setTrackingReceipt:(NSData *)arg1 forKeyWithIdentifier:(NSString *)arg2;
- (NSError *)setTrackingReceipt:(NSData *)arg1 slotIdentifier:(NSData *)arg2 confidentialMailboxData:(NSData *)arg3 ephemeralPublicKey:(NSData *)arg4 forKeyWithIdentifier:(NSString *)arg5;
- (NSError *)setTrackingReceipt:(NSData *)arg1 vehicleMobilizationData:(DAAlishaKeyEncryptedRequest *)arg2 forKeyWithIdentifier:(NSString *)arg3;

@end
