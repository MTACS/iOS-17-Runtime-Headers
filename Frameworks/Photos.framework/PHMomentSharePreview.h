
@interface PHMomentSharePreview : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    NSArray * _curatedAssetIdentifiers;
    PHAsset * _keyAsset;
    CPLMomentSharePreviewData * _previewData;
    NSArray * _previewImageData;
    NSData * _thumbnailImageData;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, copy) NSArray *curatedAssetIdentifiers;
@property (nonatomic, copy) PHAsset *keyAsset;
@property (nonatomic, readonly) NSString *keyAssetIdentifier;
@property (nonatomic, copy) NSArray *previewImageData;
@property (nonatomic, copy) NSData *thumbnailImageData;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)curatedAssetIdentifiers;
- (id)description;
- (id)initWithThumbnailImageData:(id)arg1 previewData:(id)arg2;
- (id)keyAsset;
- (id)keyAssetIdentifier;
- (id)previewImageData;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCuratedAssetIdentifiers:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPreviewImageData:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (id)thumbnailImageData;

@end
