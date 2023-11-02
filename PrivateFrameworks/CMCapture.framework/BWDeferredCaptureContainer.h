
@interface BWDeferredCaptureContainer : BWDeferredContainer {
    unsigned long long  _cacheExpiryTime;
    bool  _cached;
    long long  _commitDurationNS;
    NSDate * _commitTime;
    bool  _committed;
    bool  _flushBuffersUponCommit;
    long long  _flushDurationNS;
    NSObject<OS_dispatch_group> * _flushGroup;
    NSObject<OS_dispatch_queue> * _flushQueue;
    bool  _foldersCreated;
    bool  _preflushed;
}

@property (nonatomic) unsigned long long cacheExpiryTime;
@property (nonatomic) bool cached;
@property (nonatomic, readonly) long long commitDurationNS;
@property (nonatomic, readonly) bool committed;
@property (nonatomic, readonly) long long flushDurationNS;

+ (id)captureRequestIdentifierForManifest:(id)arg1;
+ (id)timeForManifest:(id)arg1 index:(unsigned long long)arg2;

- (int)abort;
- (unsigned long long)cacheExpiryTime;
- (bool)cached;
- (int)commit;
- (int)commitArray:(id)arg1 tag:(id)arg2;
- (int)commitBuffer:(struct __CVBuffer { }*)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 captureFrameFlags:(unsigned long long)arg4 compressionProfile:(int)arg5 metadataTag:(id)arg6 portType:(id)arg7;
- (int)commitBuffer:(struct __CVBuffer { }*)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 captureFrameFlags:(unsigned long long)arg4 compressionProfile:(int)arg5 metadataTag:(id)arg6 rawThumbnailsBufferTag:(id)arg7 rawThumbnailsMetadataTag:(id)arg8 mainRawThumbnailBufferTag:(id)arg9 mainRawThumbnailMetadataTag:(id)arg10 sifrRawThumbnailBufferTag:(id)arg11 sifrRawThumbnailMetadataTag:(id)arg12 portType:(id)arg13;
- (int)commitCaptureSettings:(id)arg1 settings:(id)arg2;
- (int)commitDictionary:(id)arg1 tag:(id)arg2;
- (long long)commitDurationNS;
- (int)commitInference:(id)arg1 tag:(id)arg2 inferenceAttachmentKey:(id)arg3 portType:(id)arg4;
- (int)commitInferenceBuffer:(struct __CVBuffer { }*)arg1 tag:(id)arg2 inferenceAttachedMediaKey:(id)arg3 compressionProfile:(int)arg4 portType:(id)arg5;
- (int)commitMetadata:(id)arg1 tag:(id)arg2 bufferTag:(id)arg3;
- (int)commitPhotoDescriptor:(id)arg1;
- (bool)committed;
- (id)copyXPCEncoding:(int*)arg1;
- (void)dealloc;
- (int)flush;
- (long long)flushDurationNS;
- (id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolderURL:(id)arg3 flushBuffersUponCommit:(bool)arg4 err:(int*)arg5;
- (int)preflush;
- (void)setCacheExpiryTime:(unsigned long long)arg1;
- (void)setCached:(bool)arg1;
- (int)waitForFlush;

@end
