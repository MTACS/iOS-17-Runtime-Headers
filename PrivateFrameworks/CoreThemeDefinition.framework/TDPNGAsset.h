
@interface TDPNGAsset : TDAsset {
    int  _exifOrientation;
    unsigned int  _fileScaleFactor;
}

@property (nonatomic) bool rawData;
@property (nonatomic, retain) NSSet *renditions;

- (void)_logError:(id)arg1;
- (int)exifOrientation;
- (unsigned int)fileScaleFactor;
- (bool)hasCursorProduction;
- (bool)hasProduction;
- (void)setFileScaleFactor:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })sourceImageSizeWithDocument:(id)arg1;
- (id)sourceImageWithDocument:(id)arg1;

@end
