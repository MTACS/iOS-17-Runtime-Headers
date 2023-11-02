
@interface AVContentKeyRequest : NSObject {
    AVContentKeyRequestInternal * _contentKeyRequest;
}

@property (readonly) bool canProvidePersistableContentKey;
@property (readonly) AVContentKey *contentKey;
@property (readonly) AVContentKeySpecifier *contentKeySpecifier;
@property (readonly) NSError *error;
@property (readonly) id identifier;
@property (nonatomic, readonly) NSData *initializationData;
@property (readonly, copy) NSDictionary *options;
@property (readonly) long long status;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (id)_createKeyRequestDictionaryForApp:(id)arg1 persistentKey:(id)arg2 serverChallenge:(id)arg3 cryptorKeyRequestID:(unsigned long long)arg4 purpose:(int)arg5;
+ (id)_ensureProtocolVersionList:(id)arg1;
+ (id)_mergePreloadingRequestOptions:(id)arg1 withCreateKeyRequestOptions:(id)arg2;
+ (bool)_prepareCryptor:(struct OpaqueFigCPECryptor { }*)arg1 forRenewal:(bool)arg2 andReturnKeyRequestID:(unsigned long long*)arg3 isInchargeOfKeyRequest:(bool*)arg4 error:(id*)arg5;
+ (void)_validateHLSEncryptionMethod:(id)arg1;
+ (void)_validateProtocolVersionList:(id)arg1;
+ (void)_validateServerChallenge:(id)arg1;

- (bool)_canRespondByRequestingPersistableContentKeyRequest;
- (void)_clearContext;
- (void)_copyAndStoreCryptorUUID;
- (struct CMBaseObject { }*)_copyContentKeyBoss;
- (int)_encryptionMode;
- (void)_finishLoadingCustomURLRequestWithError:(id)arg1;
- (void)_finishLoadingCustomURLRequestWithResponseData:(id)arg1 renewalDate:(id)arg2;
- (id)_getRetryReasonForError:(int)arg1;
- (void)_handleKeyResponseError:(id)arg1;
- (void)_handleKeyResponseSuccessWithCryptor:(struct OpaqueFigCPECryptor { }*)arg1;
- (id)_keySystem;
- (id)_makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)_prepareForKeyRenewalReturningError:(id*)arg1;
- (bool)_processContentKeyResponse:(id)arg1 renewalDate:(id)arg2 initalizationVector:(id)arg3 error:(id*)arg4;
- (void)_processContentKeyResponseError:(id)arg1;
- (unsigned long long)_requestID;
- (void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (bool)canProvidePersistableContentKey;
- (id)contentIdentifier;
- (id)contentKey;
- (id)contentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)contentKeySpecifier;
- (void)dealloc;
- (id)description;
- (bool)ensureCryptorWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 error:(id*)arg2;
- (id)error;
- (long long)externalContentProtectionStatus;
- (struct OpaqueFigCPECryptor { }*)figCryptor;
- (id)identifier;
- (id)identifierString;
- (id)initWithContentKeySession:(id)arg1 contentKeyBoss:(struct CMBaseObject { }*)arg2 useContentKeyBoss:(bool)arg3 keySpecifier:(struct FigContentKeySpecifier { }*)arg4 initializationData:(id)arg5 keyIDFromInitializationData:(id)arg6 contentIdentifier:(id)arg7 isRenewalRequest:(bool)arg8 requestID:(unsigned long long)arg9 providesPersistableKey:(bool)arg10 preloadingRequestOptions:(id)arg11 identifier:(id)arg12;
- (id)initWithContentKeySession:(id)arg1 reportGroup:(id)arg2 customURLHandler:(struct OpaqueFigCustomURLHandler { }*)arg3 identifier:(id)arg4 requestInfo:(struct __CFDictionary { }*)arg5 requestID:(unsigned long long)arg6 providesPersistableKey:(bool)arg7 isRenewalRequest:(bool)arg8;
- (id)initWithContentKeySession:(id)arg1 reportGroup:(id)arg2 identifier:(id)arg3 contentIdentifier:(id)arg4 keyIDFromInitializationData:(id)arg5 initializationData:(id)arg6 preloadingRequestOptions:(id)arg7 providesPersistableKey:(bool)arg8;
- (id)initializationData;
- (id)keyIDFromInitializationData;
- (void)makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)options;
- (void)processContentKeyResponse:(id)arg1;
- (void)processContentKeyResponseData:(id)arg1;
- (bool)processContentKeyResponseData:(id)arg1 renewalDate:(id)arg2 error:(id*)arg3;
- (void)processContentKeyResponseError:(id)arg1;
- (void)renewExpiringContentKeyResponseData;
- (bool)renewsExpiringResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;
- (bool)respondByRequestingPersistableContentKeyRequestAndReturnError:(id*)arg1;
- (id)session;
- (bool)setReportGroup:(id)arg1;
- (long long)status;
- (bool)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (id)ic_description;

@end
