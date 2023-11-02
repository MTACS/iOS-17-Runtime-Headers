
@interface VNFaceSegments : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSDictionary * _faceSegmentLabelToProbabilityMap;
    unsigned long long  _numberOfFaceSegments;
    NSData * _outputBufferData;
    unsigned long long  _outputBufferHeight;
    unsigned long long  _outputBufferWidth;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _probabilityNormSums;
    unsigned long long  _requestRevision;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) NSDictionary *faceSegmentLabelToProbabilityMap;
@property (nonatomic, readonly) unsigned long long numberOfFaceSegments;
@property (nonatomic, readonly) NSData *outputBufferData;
@property (nonatomic, readonly) unsigned long long outputBufferHeight;
@property (nonatomic, readonly) unsigned long long outputBufferWidth;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (id)faceSegmentIndexToFlagMap;
+ (id)faceSegmentToSegmentMaskGrayLevelDictionary;
+ (unsigned long long)faceSegmentsPixelSizeInBytes;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_calculateProbabilityNormalSumsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct __CVBuffer { }*)_createFaceSegmentProabilityDataPixelBufferWithSize:(struct CGSize { double x1; double x2; })arg1 error:(id*)arg2;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })_makeFaceSegmentProbabilityDataImageBuffer:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizeRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CVBuffer { }*)createMaskImageOfFaceSegments:(unsigned long long)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)createProbabilityImageOfFaceSegment:(unsigned long long)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)createProbabilityImageOfFaceSegment:(unsigned long long)arg1 region:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 normalize:(bool)arg3 error:(id*)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)faceSegmentLabelToProbabilityMap;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 outputBufferWidth:(unsigned long long)arg2 outputBufferHeight:(unsigned long long)arg3 outputBufferData:(id)arg4 numberOfFaceSegments:(unsigned long long)arg5 faceSegmentBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 faceSegmentLabelToProbabilityMap:(id)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfFaceSegments;
- (id)outputBufferData;
- (unsigned long long)outputBufferHeight;
- (unsigned long long)outputBufferWidth;
- (unsigned long long)requestRevision;

@end
