
@interface CPBitmapStore : NSObject {
    NSCache * _cache;
    NSString * _imagePath;
    bool  _lockOnRead;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> * _serialQueueRemoveImagesDefault;
    int  _version;
    NSString * _versionPath;
}

@property (nonatomic) unsigned long long cacheItemLimit;
@property (nonatomic) bool lockOnRead;
@property (nonatomic, readonly) int version;

// Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport

- (struct CGImage { }*)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 format:(unsigned char)arg4 scale:(double)arg5 fillMem:(id /* block */)arg6 alternateCompletion:(id /* block */)arg7;
- (id)_versionPath;
- (id)allGroups;
- (unsigned long long)cacheItemLimit;
- (id)cacheNumberForKey:(id)arg1;
- (void)commitTransaction;
- (void)commitTxn;
- (struct CGImage { }*)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 opaque:(bool)arg4 scale:(double)arg5 draw:(id /* block */)arg6;
- (struct CGImage { }*)copyImageForKey:(id)arg1;
- (struct CGImage { }*)copyImageForKey:(id)arg1 inGroup:(id)arg2;
- (void)dealloc;
- (bool)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7[4]; }*)arg3;
- (unsigned long long)imageCount;
- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;
- (id)imagePath;
- (id)initWithPath:(id)arg1 version:(int)arg2;
- (bool)lockOnRead;
- (unsigned int)memContentOffset;
- (void*)openAndMmap:(id)arg1 withInfo:(struct _img { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7[4]; }*)arg2;
- (void)purge;
- (void)removeImagesInGroups:(id)arg1;
- (void)removeImagesInGroups:(id)arg1 completion:(id /* block */)arg2;
- (bool)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6; unsigned char x7[4]; }*)arg3;
- (void)setCacheItemLimit:(unsigned long long)arg1;
- (void)setLockOnRead:(bool)arg1;
- (int)setVersion:(int)arg1;
- (void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 opaque:(bool)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 format:(unsigned char)arg4 formatColor:(struct CGColor { }*)arg5 scale:(double)arg6 data:(id)arg7;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 format:(unsigned char)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 opaque:(bool)arg4 scale:(double)arg5 data:(id)arg6;
- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(bool)arg3 image:(struct CGImage { }*)arg4;
- (int)version;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (int)setVersion:(int)arg1 withOptions:(unsigned long long)arg2;

@end