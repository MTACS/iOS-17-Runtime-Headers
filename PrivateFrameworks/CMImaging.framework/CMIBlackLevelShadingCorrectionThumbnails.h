
@interface CMIBlackLevelShadingCorrectionThumbnails : NSObject <NSCopying, NSSecureCoding> {
    NSData * _compressedData;
    unsigned int  _encodingOptions;
    NSDictionary * _metadata;
    NSString * _metadataFileSystemLocation;
}

@property (nonatomic, readonly) NSData *compressedData;
@property (nonatomic) unsigned int encodingOptions;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSString *metadataFileSystemLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_decompressImageFromData:(id)arg1;
- (id)_init;
- (id)compressedData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)encodingOptions;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompressedData:(id)arg1;
- (id)initWithMetadataPath:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)metadata;
- (id)metadataFileSystemLocation;
- (void)setEncodingOptions:(unsigned int)arg1;

@end
