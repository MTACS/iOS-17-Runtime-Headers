
@interface CKNanoCryptographer : NSObject {
    NSString * _cachedRecipientDigest;
    NSString * _cachedRecipientName;
    NSData * _deviceSalt;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, copy) NSString *cachedRecipientDigest;
@property (nonatomic, copy) NSString *cachedRecipientName;
@property (nonatomic, readonly) NSData *deviceSalt;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedCryptographer;

- (void).cxx_destruct;
- (id)cachedRecipientDigest;
- (id)cachedRecipientName;
- (id)deviceSalt;
- (id)dispatchQueue;
- (id)init;
- (void)prewarmDeviceSalt;
- (void)setCachedRecipientDigest:(id)arg1;
- (void)setCachedRecipientName:(id)arg1;
- (id)stringDigestForName:(id)arg1;

@end
