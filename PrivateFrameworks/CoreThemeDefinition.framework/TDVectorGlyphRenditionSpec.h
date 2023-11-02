
@interface TDVectorGlyphRenditionSpec : TDSimpleArtworkRenditionSpec

@property (nonatomic, retain) NSSet *avaliablePointSizes;

+ (id)fetchRequest;

- (bool)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;

@end
