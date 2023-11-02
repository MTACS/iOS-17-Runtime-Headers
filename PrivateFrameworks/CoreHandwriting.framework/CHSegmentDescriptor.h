
@interface CHSegmentDescriptor : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contextBounds;
    CHCutPoint * _endCutPoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _segmentBounds;
    NSNumber * _segmentID;
    CHCutPoint * _startCutPoint;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contextBounds;
@property (nonatomic, readonly) CHCutPoint *endCutPoint;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } segmentBounds;
@property (nonatomic, readonly) NSNumber *segmentID;
@property (nonatomic, readonly) CHCutPoint *startCutPoint;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxFromSegmentID:(long long)arg1 toSegmentID:(long long)arg2 withSegments:(id)arg3 withSourceDrawing:(id)arg4;
+ (id)generateSegmentsFromDrawing:(id)arg1;
+ (long long)indexForSegmentID:(id)arg1 fromSegments:(id)arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contextBounds;
- (id)endCutPoint;
- (id)initWithSegmentID:(id)arg1 startCutPoint:(id)arg2 endCutPoint:(id)arg3 referenceDrawing:(id)arg4;
- (bool)isSinglePointSegment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })segmentBounds;
- (id)segmentID;
- (void)setContextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)startCutPoint;
- (long long)strokeCount;
- (id)strokeIndexSet;

@end
