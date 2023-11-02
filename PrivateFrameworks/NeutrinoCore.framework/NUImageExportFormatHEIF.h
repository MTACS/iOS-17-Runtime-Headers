
@interface NUImageExportFormatHEIF : NUImageExportFormat {
    long long  _bitDepth;
}

@property (nonatomic) long long bitDepth;

- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (long long)bitDepth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileType;
- (id)init;
- (id)initWithBitDepth:(long long)arg1;
- (id)pixelFormat;
- (void)setBitDepth:(long long)arg1;
- (bool)supportsHDR;

@end
