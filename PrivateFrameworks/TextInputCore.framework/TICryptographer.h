
@interface TICryptographer : NSObject <TICryptographing> {
    NSString * _cachedRecipientDigest;
    NSString * _cachedRecipientName;
    NSData * _deviceSalt;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, copy) NSString *cachedRecipientDigest;
@property (nonatomic, copy) NSString *cachedRecipientName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *deviceSalt;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setSharedCryptographer:(id)arg1;
+ (id)sharedCryptographer;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (id)cachedRecipientDigest;
- (id)cachedRecipientName;
- (id)deviceSalt;
- (id)dispatchQueue;
- (id)init;
- (void)setCachedRecipientDigest:(id)arg1;
- (void)setCachedRecipientName:(id)arg1;
- (id)stringDigestForName:(id)arg1;

@end
