
@interface PLPlaceholderThumbnailManager : NSObject {
    NSObject<OS_dispatch_queue> * _isolation;
    NSCache * _placeholderDataCache;
    NSCache * _placeholderImageCache;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_cacheKeyForFormat:(id)arg1 photoImageSize:(struct CGSize { double x1; double x2; })arg2 photoImageColor:(id)arg3;
- (id)_placeholderImageWithColor:(id)arg1;
- (id)init;
- (id)newPlaceholderImageForFormat:(unsigned short)arg1 photoImageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(struct CGSize { double x1; double x2; })arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;

@end
