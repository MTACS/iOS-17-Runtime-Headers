
@interface CMIShadingFPNCorrectionImage : NSObject <NSCopying, NSSecureCoding> {
    NSData * _compressedData;
    unsigned int  _encodingOptions;
    NSDictionary * _metadata;
    NSString * _metadataFileSystemLocation;
    struct __CVBuffer { } * _pixelBuffer;
    NSString * _pixelBufferFileSystemLocation;
}

@property (nonatomic, readonly) NSData *compressedData;
@property (nonatomic) unsigned int encodingOptions;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSString *metadataFileSystemLocation;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) NSString *pixelBufferFileSystemLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_decompressImageFromData:(id)arg1;
- (id)_init;
- (id)compressedData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)encodingOptions;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompressedData:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithPixelBufferPath:(id)arg1 metadataPath:(id)arg2;
- (id)metadata;
- (id)metadataFileSystemLocation;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)pixelBufferFileSystemLocation;
- (void)setEncodingOptions:(unsigned int)arg1;

@end
