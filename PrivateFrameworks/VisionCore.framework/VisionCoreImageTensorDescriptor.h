
@interface VisionCoreImageTensorDescriptor : VisionCoreTensorDescriptor {
    unsigned long long  _bytesPerRow;
    unsigned int  _pixelFormatType;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
}

@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) unsigned int pixelFormatType;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;

+ (bool)supportsSecureCoding;

- (id)E5RTExecutionContextNewIOSurfacePropertiesAndReturnError:(id*)arg1;
- (unsigned long long)bytesPerRow;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 pixelFormatType:(unsigned int)arg2 pixelWidth:(unsigned long long)arg3 pixelHeight:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned int)pixelFormatType;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;

@end
