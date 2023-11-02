
@interface NUImageExportFormatTIFF : NUImageExportFormat {
    long long  _compression;
    long long  _pixelType;
    bool  _preserveAlpha;
}

@property long long compression;
@property long long pixelType;
@property bool preserveAlpha;

- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (long long)compression;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)depth;
- (id)fileType;
- (id)init;
- (id)pixelFormat;
- (long long)pixelType;
- (bool)preserveAlpha;
- (void)setCompression:(long long)arg1;
- (void)setPixelType:(long long)arg1;
- (void)setPreserveAlpha:(bool)arg1;

@end
