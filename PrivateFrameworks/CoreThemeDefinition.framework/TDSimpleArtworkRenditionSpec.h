
@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _alignmentRect;
    TDImageColorHistogram * _histogram;
    bool  _isBackstop;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (nonatomic, retain) NSString *alignmentRectString;
@property (nonatomic) bool allowsCompactCompression;
@property (nonatomic) bool allowsDeepmap2Compression;
@property (nonatomic) bool allowsDeepmapCompression;
@property (nonatomic) bool allowsHevcCompression;
@property (nonatomic) bool allowsMultiPassEncoding;
@property (nonatomic) bool allowsOptimalRowbytesPacking;
@property (nonatomic) bool allowsPaletteImageCompression;
@property (nonatomic, retain) TDPNGAsset *asset;
@property (nonatomic, retain) TDThemeCompressionType *compressionType;
@property (nonatomic, retain) TDImageColorHistogram *histogram;
@property (nonatomic) bool isBackstop;
@property (nonatomic) bool isTintable;
@property (nonatomic, retain) NSString *nonAlphaImageAreaString;
@property (nonatomic, retain) NSString *originalImageSizeString;
@property (nonatomic) struct CGSize { double x1; double x2; } physicalSizeInMeters;
@property (nonatomic, retain) NSString *physicalSizeInMetersString;
@property (nonatomic) double postScaleFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primitiveAlignmentRect;
@property (nonatomic, retain) NSOrderedSet *slices;

+ (void)initialize;

- (struct CGImage { }*)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int*)arg3 vectorBased:(bool*)arg4;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })_edgeMetricsForAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originalRenditionSize:(struct { int x1; int x2; })arg2 newRenditionSize:(struct { int x1; int x2; })arg3;
- (void)_logError:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (int)_rawPixelFormatOfCGImage:(struct CGImage { }*)arg1;
- (struct CGSize { double x1; double x2; })_scaleRecognitionImageFromSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_sliceRectanglesForRenditionSize:(struct { int x1; int x2; })arg1 unadjustedSliceRectangles:(id*)arg2 imageSlicesNeedAdjustment:(bool*)arg3 newRenditionSize:(struct { int x1; int x2; }*)arg4;
- (id)_slicesToUseForCSI;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)awakeFromFetch;
- (bool)canBePackedWithDocument:(id)arg1;
- (void)copyAttributesInto:(id)arg1;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)dealloc;
- (void)drawPackableRenditionInContext:(struct CGContext { }*)arg1 withDocument:(id)arg2;
- (id)histogram;
- (bool)isBackstop;
- (struct CGSize { double x1; double x2; })physicalSizeInMeters;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primitiveAlignmentRect;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHistogram:(id)arg1;
- (void)setIsBackstop:(bool)arg1;
- (void)setPhysicalSizeInMeters:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrimitiveAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)updatePackingPropertiesWithDocument:(id)arg1;

@end
