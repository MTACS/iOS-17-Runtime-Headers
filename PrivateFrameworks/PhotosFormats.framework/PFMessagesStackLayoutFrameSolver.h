
@interface PFMessagesStackLayoutFrameSolver : NSObject {
    NSArray * _normalizedHorizontalOffsets;
    double  _normalizedSizeTransform;
    double  _normalizedVerticalInsets;
    double  _normalizedVerticalOffset;
    double  _rotationAngle;
    long long  _stackedItemsCount;
}

@property (nonatomic, copy) NSArray *normalizedHorizontalOffsets;
@property (nonatomic) double normalizedSizeTransform;
@property (nonatomic) double normalizedVerticalInsets;
@property (nonatomic) double normalizedVerticalOffset;
@property (nonatomic) double rotationAngle;
@property (nonatomic) long long stackedItemsCount;

- (void).cxx_destruct;
- (void)getGeometries:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg1 count:(unsigned long long)arg2;
- (id)init;
- (id)normalizedHorizontalOffsets;
- (double)normalizedSizeTransform;
- (double)normalizedVerticalInsets;
- (double)normalizedVerticalOffset;
- (double)rotationAngle;
- (void)setNormalizedHorizontalOffsets:(id)arg1;
- (void)setNormalizedSizeTransform:(double)arg1;
- (void)setNormalizedVerticalInsets:(double)arg1;
- (void)setNormalizedVerticalOffset:(double)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setStackedItemsCount:(long long)arg1;
- (long long)stackedItemsCount;

@end
