
@interface NUImageExportFormatGeneric : NUImageExportFormat {
    NSString * _fileType;
    NSDictionary * _options;
    NUPixelFormat * _pixelFormat;
}

@property (copy) NSString *fileType;
@property (copy) NSDictionary *options;
@property (retain) NUPixelFormat *pixelFormat;

- (void).cxx_destruct;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileType;
- (id)initWithFileType:(id)arg1;
- (id)options;
- (id)pixelFormat;
- (void)setFileType:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPixelFormat:(id)arg1;

@end
