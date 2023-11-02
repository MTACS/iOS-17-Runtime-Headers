
@interface NUImageExportFormatJPEG : NUImageExportFormat {
    double  _compressionQuality;
}

@property (nonatomic) double compressionQuality;

- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (double)compressionQuality;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileType;
- (id)init;
- (id)pixelFormat;
- (void)setCompressionQuality:(double)arg1;

@end
