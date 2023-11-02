
@interface HFCameraImageCache : NSObject {
    BSUIMappedImageCache * _imageCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _imageCacheLock;
}

@property (nonatomic, retain) BSUIMappedImageCache *imageCache;

+ (id)faceCropKeyForPersonName:(id)arg1;
+ (id)heroFrameKeyForCameraClipIdentifierString:(id)arg1;
+ (id)personNameForFaceCropKey:(id)arg1;
+ (id)posterFrameKeyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2;

- (void).cxx_destruct;
- (void)addImage:(id)arg1 forKey:(id)arg2;
- (id)imageCache;
- (id)imageForKey:(id)arg1;
- (id)init;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)purgeAllImages;
- (void)releaseRecoverableResources;
- (void)setImageCache:(id)arg1;

@end
