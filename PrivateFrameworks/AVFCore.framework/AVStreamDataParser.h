
@interface AVStreamDataParser : NSObject <AVContentKeyRecipient, AVContentKeySessionDelegate, AVIntegrityChecking> {
    AVStreamDataParserInternal * _parser;
}

@property (nonatomic, copy) NSArray *allowableMIMETypes;
@property (nonatomic, readonly) AVAsset *asset;
@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (nonatomic, readonly) <AVStreamDataParserOutputHandling> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (nonatomic, readonly) NSArray *fullListOfAllowableMIMETypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic) bool preferSandboxedParsing;
@property (readonly) long long status;
@property (readonly) long long status2;
@property (readonly) Class superclass;

+ (struct OpaqueCMBlockBuffer { }*)_createBlockBufferUsingNSData:(id)arg1 withOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3;
+ (id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg1;
+ (id)audiovisualMIMETypes;
+ (bool)canParseExtendedMIMEType:(id)arg1;
+ (id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg1;

- (bool)_ICYIsAllowed;
- (bool)_MPEG2TSIsAllowed;
- (bool)_MovieFragmentStreamIsAllowed;
- (bool)_WebVTTIsAllowed;
- (void)_appendStreamData:(struct OpaqueCMBlockBuffer { }*)arg1 withFlags:(unsigned long long)arg2;
- (int)_attachToContentKeySession:(id)arg1 contentKeyBoss:(struct CMBaseObject { }*)arg2 failedSinceAlreadyAttachedToAnotherSession:(bool*)arg3;
- (bool)_attachedToExternalContentKeySession;
- (void)_configureInternal;
- (void)_createAssetIfNecessary;
- (int)_createFigManifold:(struct OpaqueCMBlockBuffer { }*)arg1 manifold:(struct OpaqueFigManifold {}**)arg2;
- (int)_createFigManifoldRemote:(struct OpaqueCMBlockBuffer { }*)arg1 manifold:(struct OpaqueFigManifold {}**)arg2;
- (int)_createFigManifoldWithBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg1 manifold:(struct OpaqueFigManifold {}**)arg2;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 discoveredNewTrackID:(int)arg2 mediaType:(id)arg3;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 orDecryptorDidChange:(void*)arg3 forTrackID:(int)arg4;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 pushedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 trackID:(int)arg3 flags:(unsigned int)arg4;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 trackDidEnd:(int)arg2;
- (void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold { }*)arg1;
- (id)_fullListOfAllowableMIMETypes;
- (int)_registerForFigManifoldCallbacksForTrackID:(int)arg1;
- (void)_setError:(id)arg1;
- (int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg1;
- (void)_willDeallocOrFinalize;
- (id)allowableMIMETypes;
- (void)appendStreamData:(id)arg1;
- (void)appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)asset;
- (id)contentKeySession;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRenewalRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
- (id)contentProtectionSessionIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)expire;
- (id)fullListOfAllowableMIMETypes;
- (bool)hasProtector;
- (id)init;
- (id)initInternalUnitTestOnly;
- (bool)isDefunct;
- (bool)mayRequireContentKeysForMediaDataProcessing;
- (bool)preferSandboxedParsing;
- (void)processContentKeyResponseData:(id)arg1 forTrackID:(int)arg2;
- (void)processContentKeyResponseError:(id)arg1 forTrackID:(int)arg2;
- (void)providePendingMediaData;
- (void)renewExpiringContentKeyResponseDataForTrackID:(int)arg1;
- (void)setAllowableMIMETypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferSandboxedParsing:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldProvideMediaData:(bool)arg1 forTrackID:(int)arg2;
- (void)setStatus:(long long)arg1;
- (bool)shouldProvideMediaDataForTrackID:(int)arg1;
- (long long)status;
- (long long)status2;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 trackID:(int)arg3 options:(id)arg4 error:(id*)arg5;

@end
