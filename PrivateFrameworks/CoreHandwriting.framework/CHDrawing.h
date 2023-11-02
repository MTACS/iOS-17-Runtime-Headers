
@interface CHDrawing : NSObject <NSCopying, NSSecureCoding> {
    struct CHDrawingStrokes { 
        struct vector<std::vector<double>, std::allocator<std::vector<double>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { 
                void *__value_; 
            } __end_cap_; 
        } strokeBounds; 
        struct vector<bool, std::allocator<bool>> { 
            unsigned long long *__begin_; 
            unsigned long long __size_; 
            struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { 
                unsigned long long __value_; 
            } __cap_alloc_; 
        } strokeBoundsValidity; 
        struct vector<double, std::allocator<double>> { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::allocator<double>> { 
                double *__value_; 
            } __end_cap_; 
        } startTimes; 
        struct vector<double, std::allocator<double>> { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::allocator<double>> { 
                double *__value_; 
            } __end_cap_; 
        } endTimes; 
        struct vector<std::vector<double>, std::allocator<std::vector<double>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { 
                void *__value_; 
            } __end_cap_; 
        } strokes; 
        long long currentStrokeIndex; 
        unsigned int mSize; 
        struct Matrix<double> { 
            int (**_vptr$Matrix)(); 
            double *_data; 
            unsigned int _w; 
            unsigned int _h; 
        } bitmap; 
        double lineHeight; 
        struct vector<int, std::allocator<int>> { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::allocator<int>> { 
                int *__value_; 
            } __end_cap_; 
        } sparseBitmap; 
    }  _drawing;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addEndTime:(double)arg1;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addStartTime:(double)arg1;
- (void)appendDrawing:(id)arg1;
- (void)appendSegment:(id)arg1 fromDrawing:(id)arg2;
- (double)averageCharacterHeightEstimation:(double)arg1 minChunkHeight:(double)arg2;
- (struct Matrix<float> { int (**x1)(); float *x2; unsigned int x3; unsigned int x4; })bitmapRepresentationForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStrokeIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStrokeIndexes:(id)arg1;
- (struct CGPoint { double x1; double x2; })centroidForStrokeIndexes:(id)arg1;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)cumulativePointToPointDistance;
- (id)description;
- (float)distanceBetweenFirstAndLastPoint;
- (id)drawingByRemovingUnnaturalHorizontalGaps:(double)arg1;
- (id)drawingScaledByFactor:(double)arg1;
- (id)drawingSpatiallyResampled:(double)arg1 maxPointsPerStroke:(long long)arg2;
- (id)drawingSpatiallyResampled:(double)arg1 outputPointMap:(void*)arg2;
- (id)drawingTransformedWithTranslation:(struct CGVector { double x1; double x2; })arg1 scaleFactor:(double)arg2;
- (id)drawingWithStrokesFromIndexArray:(id)arg1;
- (id)drawingWithStrokesFromIndexSet:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endStroke;
- (double)endTimeForStroke:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)indexesOfStrokesSmallerThanSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfJSONDictionary:(id)arg1;
- (id)initWithContentsOfXYString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDrawing:(id)arg1;
- (bool)isPrefixForDrawing:(id)arg1;
- (id)jsonRepresentationWithContext:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })matchingStrokePrefixRangeForDrawing:(id)arg1;
- (id)newDrawingWithAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)newDrawingWithTransform:(id /* block */)arg1;
- (struct Matrix<float> { int (**x1)(); float *x2; unsigned int x3; unsigned int x4; })orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2;
- (unsigned long long)pointCount;
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (void)setLineHeight:(double)arg1;
- (id)sortedDrawingUsingMinXCoordinate;
- (id)sortedDrawingUsingStrokeMidPoint:(id*)arg1;
- (id)sortedDrawingUsingStrokeMidPointHorizontalOverlapAware:(id*)arg1 shouldSortRTL:(bool)arg2;
- (double)startTimeForStroke:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeBoundsAtIndex:(unsigned long long)arg1;
- (unsigned long long)strokeCount;
- (struct vector<long, std::allocator<long>> { long long *x1; long long *x2; struct __compressed_pair<long *, std::allocator<long>> { long long *x_3_1_1; } x3; })strokeIndicesSortedByMinXCoordinate;
- (void)writeToFile;
- (void)writeToFileWithContext:(id)arg1 folder:(id)arg2 basename:(id)arg3;
- (id)xyRepresentation;

@end
