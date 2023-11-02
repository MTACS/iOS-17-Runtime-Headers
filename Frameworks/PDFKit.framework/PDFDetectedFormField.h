
@interface PDFDetectedFormField : NSObject {
    long long  _index;
    long long  _kind;
    long long  _numberOfSegments;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    double  _segmentWidth;
}

@property long long index;
@property long long kind;
@property (nonatomic, readonly) double maxX;
@property (nonatomic, readonly) double minX;
@property long long numberOfSegments;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property double segmentWidth;

- (bool)canBeMergedWith:(id)arg1;
- (long long)index;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andKind:(long long)arg2;
- (long long)kind;
- (double)maxX;
- (double)maxY;
- (double)minX;
- (double)minY;
- (long long)numberOfSegments;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (double)segmentWidth;
- (void)setIndex:(long long)arg1;
- (void)setKind:(long long)arg1;
- (void)setNumberOfSegments:(long long)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSegmentWidth:(double)arg1;

@end
