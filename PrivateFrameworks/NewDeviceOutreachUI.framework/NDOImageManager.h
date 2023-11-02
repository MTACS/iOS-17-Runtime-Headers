
@interface NDOImageManager : NSObject {
    NSCache * _imageCache;
}

@property (nonatomic, retain) NSCache *imageCache;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)fetchImageWithURLString:(id)arg1 completion:(id /* block */)arg2;
- (id)imageCache;
- (id)initPrivate;
- (void)resetCache;
- (void)setImageCache:(id)arg1;

@end
