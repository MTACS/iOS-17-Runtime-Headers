
@protocol XBSnapshotDataProvider <NSObject>

@required

- (XBSnapshotDataProviderContext *)context;

@optional

- (<XBSnapshotDataProvider> *)fallbackSnapshotDataProvider;
- (UIImage *)fetchImage;
- (NSData *)fetchImageData:(out struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1;
- (UIImage *)fetchImageForFormat:(long long)arg1;
- (bool)hasProtectedContent;
- (void)invalidateImage;

@end
