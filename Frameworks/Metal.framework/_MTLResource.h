
@interface _MTLResource : _MTLObjectWithLabel

@property (nonatomic, readonly) unsigned long long accelerationStructureUniqueIdentifier;
@property (readonly) unsigned long long allocationID;
@property (nonatomic, readonly) unsigned long long colorSpaceConversionMatrix;
@property (nonatomic, readonly) unsigned long long compressionFootprint;
@property (readonly) long long compressionType;

- (unsigned long long)accelerationStructureUniqueIdentifier;
- (unsigned long long)allocationID;
- (unsigned long long)colorSpaceConversionMatrix;
- (unsigned long long)compressionFootprint;
- (long long)compressionType;

@end
