
@interface AVContentKeyReportGroup : NSObject {
    AVWeakReference * _contentKeySessionWeakReference;
    NSMutableArray * _cryptorsList;
    struct OpaqueFigContentKeySession { } * _figContentKeySession;
    unsigned long long  _groupID;
    bool  _isExpired;
    NSString * _keySystem;
    NSData * _protectorSessionIdentifier;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _useContentKeyBoss;
    struct OpaqueFigCFWeakReferenceHolder { } * _weakContentKeyBoss;
}

@property (readonly) NSData *contentProtectionSessionIdentifier;

- (bool)_associateRequestWithGroupWithRequestID:(unsigned long long)arg1 error:(id*)arg2;
- (struct CMBaseObject { }*)_contentKeyBoss;
- (id)_contentKeySession;
- (bool)_destroyContentKeyGroupWithError:(id*)arg1;
- (struct OpaqueFigContentKeySession { }*)_figContentKeySession;
- (id)_processContentKeyRequestWithIdentifier:(id)arg1 contentIdentifier:(id)arg2 keyIDFromInitializationData:(id)arg3 initializationData:(id)arg4 options:(id)arg5;
- (id)_processContentKeyRequestWithKeyRequestFromPSSH:(id)arg1 decryptFormatType:(id)arg2 initializationData:(id)arg3 options:(id)arg4;
- (bool)_setAuthorizationToken:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
- (bool)associateContentKeyRequest:(id)arg1;
- (int)configureAppIdentifier:(id)arg1;
- (id)contentProtectionSessionIdentifier;
- (struct OpaqueFigCPECryptor { }*)copyCryptorForCryptKeyAttributes:(id)arg1;
- (struct OpaqueFigCPECryptor { }*)copyCryptorForIdentifier:(id)arg1 initializationData:(id)arg2;
- (struct OpaqueFigCPECryptor { }*)createCryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 hlsMethod:(id)arg4 error:(id*)arg5;
- (void)createProtectorSessionIdentifierIfNecessary;
- (id)cryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 hlsMethod:(id)arg4;
- (void)dealloc;
- (void)expire;
- (int)externalProtectionStatusForCryptor:(struct OpaqueFigCPECryptor { }*)arg1 withDisplays:(id)arg2;
- (void)failProcessingContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 error:(id)arg3;
- (bool)hasProtector;
- (id)initWithKeySystem:(id)arg1 keySession:(id)arg2 contentKeyBoss:(struct CMBaseObject { }*)arg3 useContentKeyBoss:(bool)arg4 groupID:(unsigned long long)arg5 storageDirectoryAtURL:(id)arg6;
- (void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;

@end
