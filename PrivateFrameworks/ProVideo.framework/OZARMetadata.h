
@interface OZARMetadata : NSObject <NSSecureCoding, OZSimplyCodable, OZSimplyMetadataItemConvertible>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct opaqueCMFormatDescription { }*)createMetadataFormat;
+ (id)createWithMetadataItem:(id)arg1 error:(out id*)arg2;
+ (id)decompressedData:(id)arg1 error:(out id*)arg2;
+ (long long)metadataCompressionAlgorithm;
+ (struct opaqueCMFormatDescription { }*)metadataFormat;
+ (id)metadataItemIdentifier;
+ (id)personSegmentationMediaCharacteristics;
+ (id)sceneDepthMediaCharacteristics;
+ (id)simplyDecodeFromData:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (id)compressedDataWithError:(out id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metadataItemWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 error:(out id*)arg2;
- (id)simplyEncode:(out id*)arg1;

@end
