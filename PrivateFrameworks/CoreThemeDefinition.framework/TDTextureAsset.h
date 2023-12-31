
@interface TDTextureAsset : TDAsset {
    int  exifOrientation;
}

@property (nonatomic) int exifOrientation;
@property (nonatomic, retain) NSSet *renditions;

- (void)_logError:(id)arg1;
- (int)exifOrientation;
- (void)setExifOrientation:(int)arg1;
- (struct CGSize { double x1; double x2; })sourceImageSizeWithDocument:(id)arg1;
- (id)sourceImageWithDocument:(id)arg1;

@end
