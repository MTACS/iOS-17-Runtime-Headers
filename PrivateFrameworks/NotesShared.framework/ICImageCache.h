
@interface ICImageCache : NSObject {
    ICLRUCache * _bigImageCache;
    ICCache * _imageCache;
    NSObject<OS_dispatch_source> * _memoryWarningEventSource;
}

@property (nonatomic, retain) ICLRUCache *bigImageCache;
@property (nonatomic, retain) ICCache *imageCache;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryWarningEventSource;

+ (double)bigImageSize;
+ (unsigned long long)maxBigImageCount;

- (void).cxx_destruct;
- (id)bigImageCache;
- (id)imageCache;
- (id)imageForKey:(id)arg1;
- (id)init;
- (id)memoryWarningEventSource;
- (void)receivedMemoryWarning;
- (void)registerForMemoryWarnings;
- (void)removeAllImages;
- (void)removeImageForKey:(id)arg1;
- (void)setBigImageCache:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setImageCache:(id)arg1;
- (void)setMemoryWarningEventSource:(id)arg1;
- (void)unregisterForMemoryWarnings;

@end
