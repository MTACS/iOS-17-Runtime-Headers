
@interface PXImageRequestDescriptor : NSObject <NSCopying> {
    <PXDisplayAsset> * _asset;
    long long  _contentMode;
    PXImageRequestOptions * _options;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly, copy) PXImageRequestOptions *options;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (id)asset;
- (long long)contentMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)options;
- (struct CGSize { double x1; double x2; })targetSize;

@end
