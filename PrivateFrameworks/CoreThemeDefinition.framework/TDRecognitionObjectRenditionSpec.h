
@interface TDRecognitionObjectRenditionSpec : TDSimpleArtworkRenditionSpec

@property (nonatomic) float a11;
@property (nonatomic) float a12;
@property (nonatomic) float a13;
@property (nonatomic) float a14;
@property (nonatomic) float a21;
@property (nonatomic) float a22;
@property (nonatomic) float a23;
@property (nonatomic) float a24;
@property (nonatomic) float a31;
@property (nonatomic) float a32;
@property (nonatomic) float a33;
@property (nonatomic) float a34;
@property (nonatomic) float a41;
@property (nonatomic) float a42;
@property (nonatomic) float a43;
@property (nonatomic) float a44;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic) int version;

+ (id)fetchRequest;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (void)setReferenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
