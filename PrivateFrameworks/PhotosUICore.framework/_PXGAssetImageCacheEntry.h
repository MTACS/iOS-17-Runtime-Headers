
@interface _PXGAssetImageCacheEntry : NSObject {
    <PXDisplayAsset> * _asset;
    struct CGImage { } * _cgImage;
    unsigned int  _imageOrientation;
    bool  _isDegraded;
    NSMutableIndexSet * _requestIDs;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (nonatomic) struct CGImage { }*cgImage;
@property (nonatomic) unsigned int imageOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool isDegraded;
@property (nonatomic, readonly) NSMutableIndexSet *requestIDs;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (id)asset;
- (struct CGImage { }*)cgImage;
- (void)dealloc;
- (unsigned int)imageOrientation;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (bool)isDegraded;
- (void)prepareForReuse;
- (id)requestIDs;
- (void)setAsset:(id)arg1;
- (void)setCgImage:(struct CGImage { }*)arg1;
- (void)setImageOrientation:(unsigned int)arg1;
- (void)setIsDegraded:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end
