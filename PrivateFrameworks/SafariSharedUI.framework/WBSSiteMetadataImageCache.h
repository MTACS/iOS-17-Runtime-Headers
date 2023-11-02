
@interface WBSSiteMetadataImageCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheAccessLock;
    WBSCacheRetainReleasePolicy * _cachePolicy;
    NSMutableDictionary * _cacheSettings;
    WBSCoalescedAsynchronousWriter * _cacheSettingsWriter;
    <WBSSiteMetadataImageCacheDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _diskAccessQueue;
    unsigned long long  _fileProtectionOptions;
    NSURL * _imageDirectoryURL;
    long long  _imageType;
    NSMutableDictionary * _imagesForKeyStrings;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _keyStringRequestsToCompletionHandlers;
    NSMutableSet * _missingImageKeyStrings;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _terminating;
}

@property <WBSSiteMetadataImageCacheDelegate> *delegate;
@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property (nonatomic, readonly) long long imageType;
@property (getter=isTerminating, nonatomic, readonly) bool terminating;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_cacheSettingsFileURL;
- (void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 fromDisk:(bool)arg3;
- (id)_diskAccessQueueName;
- (void)_dispatchDiskAccessBlock:(id /* block */)arg1;
- (void)_emptyCacheDirectory;
- (id)_fileLocationForKeyString:(id)arg1;
- (id)_fileNameForKeyString:(id)arg1;
- (bool)_internalDidLoadImageAndShouldNotify:(id)arg1 forKeyString:(id)arg2 fromDisk:(bool)arg3;
- (long long)_internalImageStateForKeyString:(id)arg1;
- (void)_internalPurgeUnneededImages;
- (id)_internalQueueName;
- (void)_internalReleaseImageForKeyString:(id)arg1;
- (void)_internalRemoveAllImages;
- (void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1;
- (void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_internalSetImageState:(long long)arg1 forKeyString:(id)arg2;
- (void)_internalSetUpImageCache;
- (void)_notifyDidFinishLoadingSettings;
- (void)_removeImagesPassingTest:(id /* block */)arg1;
- (void)_requestImageForKeyString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)emptyCache;
- (void)getImageForKeyString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)imageDirectoryURL;
- (id)imageForKeyString:(id)arg1 getImageState:(long long*)arg2;
- (long long)imageStateForKeyString:(id)arg1;
- (long long)imageType;
- (id)init;
- (id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2;
- (id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 fileProtectionOptions:(unsigned long long)arg3;
- (bool)isImageRetainedForKeyString:(id)arg1;
- (bool)isTerminating;
- (void)purgeUnneededImages;
- (void)releaseImageForKeyString:(id)arg1;
- (void)releaseImageWithKeyStringProvider:(id /* block */)arg1;
- (void)releaseImagesForKeyStrings:(id)arg1;
- (void)removeAllImages;
- (void)removeImagesFromCacheForKeyStrings:(id)arg1;
- (void)retainImageForKeyString:(id)arg1;
- (void)retainImageWithKeyStringProvider:(id /* block */)arg1;
- (void)retainImagesForKeyStrings:(id)arg1;
- (void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)savePendingChangesBeforeTermination;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forKeyString:(id)arg2;
- (void)setImageState:(long long)arg1 forKeyString:(id)arg2;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (void)setUpImageCache;
- (id)settingForKey:(id)arg1;

@end
