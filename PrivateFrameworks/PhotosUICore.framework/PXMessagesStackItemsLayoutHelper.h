
@interface PXMessagesStackItemsLayoutHelper : NSObject <PXMutableMessagesStackItemsLayoutHelper> {
    struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; } * _baseGeometries;
    unsigned long long  _baseGeometriesSize;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double zPos; 
        double rotationAngle; 
        double alpha; 
        double overlayAlpha; 
        double tapbackScale; 
        double aspectMixFactor; 
    }  _finalItemCentralGeometry;
    PFMessagesStackLayoutFrameSolver * _frameSolver;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } center; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double zPos; 
        double rotationAngle; 
        double alpha; 
        double overlayAlpha; 
        double tapbackScale; 
        double aspectMixFactor; 
    }  _initialItemCentralGeometry;
    unsigned long long  _nestedChanges;
    double  _normalizedContentInsets;
    NSArray * _normalizedStackHorizontalOffsets;
    double  _normalizedStackSizeTransform;
    double  _normalizedStackVerticalOffset;
    double  _rotationAngle;
    unsigned long long  _stackedItemsCount;
    unsigned long long  _zOrderArchSide;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double normalizedContentInsets;
@property (nonatomic, copy) NSArray *normalizedStackHorizontalOffsets;
@property (nonatomic) double normalizedStackSizeTransform;
@property (nonatomic) double normalizedStackVerticalOffset;
@property (nonatomic) double rotationAngle;
@property (nonatomic) unsigned long long stackedItemsCount;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long zOrderArchSide;

- (void).cxx_destruct;
- (void)_swapBaseZPositions;
- (void)_updateInternalState;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; })baseGeometryForIndex:(long long)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (void)getGeometries:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg1 count:(unsigned long long)arg2 forVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 focus:(double)arg4 archSide:(unsigned long long)arg5 keyframeOverride:(long long)arg6;
- (double)horizontalContentMarginForReferenceSize:(struct CGSize { double x1; double x2; })arg1 itemAspect:(double)arg2;
- (id)init;
- (struct CGSize { double x1; double x2; })maxItemSizeForReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (double)normalizedContentInsets;
- (id)normalizedStackHorizontalOffsets;
- (double)normalizedStackSizeTransform;
- (double)normalizedStackVerticalOffset;
- (void)performChanges:(id /* block */)arg1;
- (double)rotationAngle;
- (void)setNormalizedContentInsets:(double)arg1;
- (void)setNormalizedStackHorizontalOffsets:(id)arg1;
- (void)setNormalizedStackSizeTransform:(double)arg1;
- (void)setNormalizedStackVerticalOffset:(double)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setStackedItemsCount:(unsigned long long)arg1;
- (void)setZOrderArchSide:(unsigned long long)arg1;
- (unsigned long long)stackedItemsCount;
- (unsigned long long)zOrderArchSide;

@end
