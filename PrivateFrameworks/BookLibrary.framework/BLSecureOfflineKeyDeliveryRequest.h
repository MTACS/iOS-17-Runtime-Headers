
@interface BLSecureOfflineKeyDeliveryRequest : ICRequestOperation <AVContentKeySessionDelegate> {
    AVContentKeyRequest * _activeKeyRequest;
    AVPersistableContentKeyRequest * _activePersistableKeyRequest;
    NSData * _certificateData;
    NSString * _identity;
    NSURL * _keyCertificateURL;
    NSURL * _keyServerURL;
    AVContentKeySession * _keySession;
    NSObject<OS_dispatch_queue> * _keySessionQueue;
    MPMediaItem * _mediaItem;
    NSData * _persistentKeyData;
    ICStoreRequestContext * _requestContext;
    _BLAcquireSlotRequest * _slotRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identity;
@property (nonatomic, copy) NSURL *keyCertificateURL;
@property (nonatomic, copy) NSURL *keyServerURL;
@property (nonatomic, retain) MPMediaItem *mediaItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSPCData;
- (id)_deviceGUID;
- (void)_ksq_fetchCKCDataUsingSPC:(id)arg1 forKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)execute;
- (id)identity;
- (id)init;
- (id)initWithRequestContext:(id)arg1;
- (id)keyCertificateURL;
- (id)keyServerURL;
- (id)mediaItem;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;
- (void)setIdentity:(id)arg1;
- (void)setKeyCertificateURL:(id)arg1;
- (void)setKeyServerURL:(id)arg1;
- (void)setMediaItem:(id)arg1;

@end
