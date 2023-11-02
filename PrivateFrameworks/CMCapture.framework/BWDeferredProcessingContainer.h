
@interface BWDeferredProcessingContainer : BWDeferredContainer {
    unsigned int  _ageSeconds;
    NSObject<OS_dispatch_queue> * _bufferPrefetchQueue;
    bool  _isRemote;
    NSObject<OS_dispatch_queue> * _metadataPrefetchQueue;
    BWPhotoManifest * _photoManifest;
    unsigned int  _processingCount;
    unsigned long long  _sizeBytes;
}

@property (nonatomic, readonly) unsigned int ageSeconds;
@property (nonatomic, readonly) bool isRemote;
@property (nonatomic, readonly) BWPhotoManifest *photoManifest;
@property (nonatomic, readonly) unsigned int processingCount;
@property (nonatomic, readonly) unsigned long long sizeBytes;

- (unsigned int)ageSeconds;
- (id)copyArrayForTag:(id)arg1 customClasses:(id)arg2 err:(int*)arg3;
- (id)copyAttributesForBufferType:(unsigned long long)arg1 portType:(id)arg2 err:(int*)arg3;
- (struct __CVBuffer { }*)copyBufferForTag:(id)arg1 err:(int*)arg2;
- (struct __CVBuffer { }*)copyBufferForType:(unsigned long long)arg1 portType:(id)arg2 metadata:(id*)arg3 err:(int*)arg4;
- (id)copyBuffersForType:(unsigned long long)arg1 portType:(id)arg2 metadataArray:(id*)arg3 err:(int*)arg4;
- (id)copyDictionaryForTag:(id)arg1 customClasses:(id)arg2 err:(int*)arg3;
- (id)copyDictionaryForTag:(id)arg1 err:(int*)arg2;
- (struct __CVBuffer { }*)copyInferenceBufferForKey:(id)arg1 portType:(id)arg2 err:(int*)arg3;
- (id)copyInferenceForKey:(id)arg1 customClasses:(id)arg2 portType:(id)arg3 err:(int*)arg4;
- (id)copyMetadataForBufferTag:(id)arg1 err:(int*)arg2;
- (id)copyMetadataForTag:(id)arg1 err:(int*)arg2;
- (void)dealloc;
- (bool)hasBufferForType:(unsigned long long)arg1 portType:(id)arg2;
- (bool)hasInference:(id)arg1 portType:(id)arg2;
- (bool)hasInferenceBuffer:(id)arg1 portType:(id)arg2;
- (id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolderURL:(id)arg3 openForPeeking:(bool)arg4 err:(int*)arg5;
- (id)initWithApplicationID:(id)arg1 resolvedSettings:(id)arg2 unresolvedSettings:(id)arg3 pipelineParameters:(id)arg4 intermediates:(id)arg5 photoDescriptors:(id)arg6;
- (id)initWithXPCEncoding:(id)arg1 applicationID:(id)arg2 captureRequestIdentifier:(id)arg3 baseFolderURL:(id)arg4 err:(int*)arg5;
- (bool)isRemote;
- (id)photoManifest;
- (unsigned int)processingCount;
- (void)releaseIntermediates;
- (unsigned long long)sizeBytes;

@end
