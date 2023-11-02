
@interface NUImageExportFormatPNG : NUImageExportFormat {
    bool  _preserveAlpha;
}

@property bool preserveAlpha;

- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileType;
- (id)init;
- (id)pixelFormat;
- (bool)preserveAlpha;
- (void)setPreserveAlpha:(bool)arg1;

@end
