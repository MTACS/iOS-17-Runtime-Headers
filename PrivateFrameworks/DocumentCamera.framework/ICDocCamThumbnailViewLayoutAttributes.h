
@interface ICDocCamThumbnailViewLayoutAttributes : UICollectionViewLayoutAttributes {
    double  _imageHeight;
    double  _imageWidth;
    bool  _renderBorder;
    bool  _renderShadow;
}

@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
@property (nonatomic) bool renderBorder;
@property (nonatomic) bool renderShadow;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)imageHeight;
- (double)imageWidth;
- (bool)isEqual:(id)arg1;
- (bool)renderBorder;
- (bool)renderShadow;
- (void)setImageHeight:(double)arg1;
- (void)setImageWidth:(double)arg1;
- (void)setRenderBorder:(bool)arg1;
- (void)setRenderShadow:(bool)arg1;

@end
