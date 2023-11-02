
@interface IMImageDiskCache : IMBaseDiskCache {
    NSMutableDictionary * _completionHandlers;
    double  _maxImageDimensionInPixels;
    NSString * _onDiskFileType;
    NSMutableDictionary * _pendingPerformWhenAvailableOnDiskBlocks;
    NSMutableSet * _proccessingKeys;
    double  _saveCompressionQuality;
    NSRecursiveLock * _syncLock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *completionHandlers;
@property (nonatomic, readonly) double maxImageDimensionInPixels;
@property (nonatomic, readonly) NSString *onDiskFileType;
@property (nonatomic, readonly) NSMutableDictionary *pendingPerformWhenAvailableOnDiskBlocks;
@property (nonatomic, readonly) NSMutableSet *proccessingKeys;
@property (nonatomic, readonly) double saveCompressionQuality;
@property (nonatomic, readonly) NSRecursiveLock *syncLock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (bool)_addImage:(id)arg1 forKey:(id)arg2 resizeIfTooBig:(bool)arg3 manageProcessingState:(bool)arg4 completion:(id /* block */)arg5;
- (void)_addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 discardTransparency:(bool)arg3 enforceSquare:(bool)arg4 maxDimensionInPixels:(double)arg5 completion:(id /* block */)arg6;
- (struct CGImageSource { }*)_copyImageSourceByConvertingImage:(struct CGImageSource { }*)arg1 toFileType:(id)arg2 destinationUrl:(id)arg3;
- (id)_defaultImageSavingOptions;
- (id)_defaultImageSavingSourceOptions;
- (void)_finishProcessingKey:(id)arg1 success:(bool)arg2;
- (bool)_isProcessingKey:(id)arg1 completion:(id /* block */)arg2;
- (bool)_needsResizing:(struct CGImageSource { }*)arg1 maxDimensionInPixels:(double)arg2;
- (id)_onDiskFileExtension;
- (void)_performWithSyncLock:(id /* block */)arg1;
- (id)_resizeImageForKey:(id)arg1 maxDimensionInPixels:(double)arg2;
- (bool)_startProcessingForAddingKey:(id)arg1 originalKey:(id)arg2;
- (void)_startProcessingKey:(id)arg1 completion:(id /* block */)arg2;
- (bool)_usesLessMemoryToConvertThenResizeImageSource:(struct CGImageSource { }*)arg1 destinationDimensionInPixels:(double)arg2;
- (bool)addImage:(id)arg1 forKey:(id)arg2;
- (void)addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 discardTransparency:(bool)arg3 enforceSquare:(bool)arg4 maxDimensionInPixels:(double)arg5 completion:(id /* block */)arg6;
- (void)addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 enforceSquare:(bool)arg3 maxDimensionInPixels:(double)arg4 completion:(id /* block */)arg5;
- (void)addImagesWithSourceUrl:(id)arg1 forKeys:(id)arg2 discardTransparency:(bool)arg3 enforceSquare:(bool)arg4 completion:(id /* block */)arg5;
- (id)completionHandlers;
- (bool)copyImageFromSourceUrl:(id)arg1 sourceFileType:(id)arg2 to:(id)arg3 discardTransparency:(bool)arg4 enforceSquare:(bool)arg5 maxDimensionInPixels:(double)arg6;
- (void)copyImageFromSourceUrl:(id)arg1 to:(id)arg2 discardTransparency:(bool)arg3 enforceSquare:(bool)arg4 maxDimensionInPixels:(double)arg5 completion:(id /* block */)arg6;
- (id)imageForKey:(id)arg1;
- (id)imageUrlForKey:(id)arg1;
- (id)initWithBasePath:(id)arg1;
- (id)initWithBasePath:(id)arg1 maxImageDimensionInPixels:(double)arg2;
- (double)maxImageDimensionInPixels;
- (id)onDiskFileType;
- (id)pathForKey:(id)arg1;
- (id)pendingPerformWhenAvailableOnDiskBlocks;
- (void)performWhenURLAvailableForImageForKey:(id)arg1 block:(id /* block */)arg2;
- (id)proccessingKeys;
- (double)saveCompressionQuality;
- (id)syncLock;
- (id)workQueue;

@end
