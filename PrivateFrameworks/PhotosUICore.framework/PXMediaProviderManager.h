
@interface PXMediaProviderManager : NSObject {
    NSMapTable * _imageProviderByClass;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)imageProviderForAsset:(id)arg1;
- (id)init;

@end
