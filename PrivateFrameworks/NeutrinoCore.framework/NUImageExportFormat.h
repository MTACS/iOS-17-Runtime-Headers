
@interface NUImageExportFormat : NSObject <NSCopying>

@property (nonatomic, readonly) bool supportsHDR;

+ (id)defaultFormatForURL:(id)arg1;

- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fileType;
- (id)pixelFormat;
- (bool)supportsHDR;

@end
