
@interface TXRAssetCatalogFileAttributes : NSObject {
    struct CGColorSpace { } * _colorSpace;
    unsigned char  _exifOrientation;
    unsigned long long  _fileFormat;
}

@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic) unsigned char exifOrientation;
@property (nonatomic) unsigned long long fileFormat;

- (struct CGColorSpace { }*)colorSpace;
- (unsigned char)exifOrientation;
- (unsigned long long)fileFormat;
- (id)init;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setExifOrientation:(unsigned char)arg1;
- (void)setFileFormat:(unsigned long long)arg1;

@end
