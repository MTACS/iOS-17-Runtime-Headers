
@interface CHDrawingSegmentGroup : NSObject {
    long long  _segmentGroupIndex;
    NSArray * _segments;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long segmentGroupIndex;
@property (nonatomic, readonly) NSArray *segments;
@property (nonatomic, readonly) long long totalSegmentCount;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)initWithSegmentGroupIndex:(long long)arg1 segments:(id)arg2;
- (long long)segmentGroupIndex;
- (id)segments;
- (long long)totalSegmentCount;

@end
