
@interface SXAnimatedImageViewCache : NSObject {
    SXAnimatedImage * _animatedImage;
    NSMutableArray * _cachedImages;
    bool  _cachingEnabled;
    <SXAnimatedImageViewCacheDelegate> * _delegate;
    NSMutableIndexSet * _indicesToCache;
    unsigned long long  _lastRequestedIndex;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _numberOfCachedImages;
    NSOperationQueue * _queue;
    long long  _singleImageByteSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) SXAnimatedImage *animatedImage;
@property (nonatomic, readonly) NSMutableArray *cachedImages;
@property (nonatomic) bool cachingEnabled;
@property (nonatomic) <SXAnimatedImageViewCacheDelegate> *delegate;
@property (nonatomic, readonly) NSMutableIndexSet *indicesToCache;
@property unsigned long long lastRequestedIndex;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) unsigned long long maxCacheSize;
@property (nonatomic) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property long long singleImageByteSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (getter=preloadingSuspended, nonatomic) bool suspendPreloading;

- (void).cxx_destruct;
- (id)animatedImage;
- (void)cacheNextImage;
- (id)cachedImages;
- (bool)cachingEnabled;
- (void)checkCacheSize;
- (id)decodeImageFromSource:(struct CGImageSource { }*)arg1 index:(unsigned long long)arg2;
- (void)decreaseCacheSize;
- (id)delegate;
- (id)imageForFrameIndex:(unsigned long long)arg1;
- (id)indicesToCache;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)lastRequestedIndex;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (unsigned long long)maxCacheSize;
- (unsigned long long)nearestCachedFrameIndexForFrameIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfCachedImages;
- (bool)preloadingSuspended;
- (void)prepareCache;
- (void)prepareImageForFrameIndex:(unsigned long long)arg1;
- (void)prune;
- (id)queue;
- (void)restoreCacheSize;
- (void)setAnimatedImage:(id)arg1;
- (void)setCachingEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastRequestedIndex:(unsigned long long)arg1;
- (void)setNumberOfCachedImages:(unsigned long long)arg1;
- (void)setSingleImageByteSize:(long long)arg1;
- (void)setSuspendPreloading:(bool)arg1;
- (long long)singleImageByteSize;
- (struct CGSize { double x1; double x2; })size;

@end
