
@interface PXAutoloopVideoInput : NSObject {
    AVAsset * _asset;
    NSURL * _imageURL;
}

@property (nonatomic, readonly, copy) AVAsset *asset;
@property (nonatomic, readonly) NSURL *imageURL;

+ (id)inputWithAsset:(id)arg1 imageURL:(id)arg2;

- (void).cxx_destruct;
- (id)asset;
- (id)imageURL;
- (id)initWithAsset:(id)arg1 imageURL:(id)arg2;

@end
