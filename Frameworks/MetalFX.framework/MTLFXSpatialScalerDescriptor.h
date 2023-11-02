
@interface MTLFXSpatialScalerDescriptor : NSObject <NSCopying> {
    unsigned long long  _colorTextureFormat;
    long long  colorProcessingMode;
    unsigned long long  inputHeight;
    unsigned long long  inputWidth;
    unsigned long long  outputHeight;
    unsigned long long  outputTextureFormat;
    unsigned long long  outputWidth;
    unsigned long long  version;
}

@property (nonatomic) long long colorProcessingMode;
@property (nonatomic) unsigned long long colorTextureFormat;
@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long outputHeight;
@property (nonatomic) unsigned long long outputTextureFormat;
@property (nonatomic) unsigned long long outputWidth;
@property unsigned long long version;

+ (unsigned long long)colorTextureUsage;
+ (unsigned long long)inputTextureUsage;
+ (unsigned long long)outputTextureUsage;
+ (bool)supportsDevice:(id)arg1;

- (long long)colorProcessingMode;
- (unsigned long long)colorTextureFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)getInputTextureFormat;
- (unsigned long long)inputHeight;
- (unsigned long long)inputWidth;
- (id)newSpatialScalerWithDevice:(id)arg1;
- (unsigned long long)outputHeight;
- (unsigned long long)outputTextureFormat;
- (unsigned long long)outputWidth;
- (void)setColorProcessingMode:(long long)arg1;
- (void)setColorTextureFormat:(unsigned long long)arg1;
- (void)setInputHeight:(unsigned long long)arg1;
- (void)setInputTextureFormat:(unsigned long long)arg1;
- (void)setInputWidth:(unsigned long long)arg1;
- (void)setOutputHeight:(unsigned long long)arg1;
- (void)setOutputTextureFormat:(unsigned long long)arg1;
- (void)setOutputWidth:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
