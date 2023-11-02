
@interface _PLPlaceholderThumbnailCachedData : NSObject {
    int  _bytesPerRow;
    int  _dataHeight;
    int  _dataWidth;
    int  _height;
    NSData * _imageData;
    int  _imageDataOffset;
    int  _width;
}

- (void).cxx_destruct;
- (id)imageDataWithWidth:(int*)arg1 height:(int*)arg2 bytesPerRow:(int*)arg3 dataWidth:(int*)arg4 dataHeight:(int*)arg5 imageDataOffset:(int*)arg6;
- (id)initWithImageData:(id)arg1 width:(int)arg2 height:(int)arg3 bytesPerRow:(int)arg4 dataWidth:(int)arg5 dataHeight:(int)arg6 imageDataOffset:(int)arg7;

@end
