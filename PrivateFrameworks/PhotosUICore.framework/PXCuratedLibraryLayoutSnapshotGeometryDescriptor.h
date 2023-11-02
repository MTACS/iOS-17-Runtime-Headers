
@interface PXCuratedLibraryLayoutSnapshotGeometryDescriptor : NSObject {
    long long  _dataSourceIdentifier;
    double  _intersectionSpacing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    NSDictionary * _sectionGeometryDescriptorsByIndexPath;
    long long  _skimmingDataSourceIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    long long  _zoomLevel;
}

@property (nonatomic, readonly) long long dataSourceIdentifier;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) NSIndexSet *sections;
@property (nonatomic, readonly) long long skimmingDataSourceIdentifier;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic, readonly) long long zoomLevel;

- (void).cxx_destruct;
- (void)compactifySectionsBeyondVisibleRectWithAnchorSection:(long long)arg1;
- (long long)dataSourceIdentifier;
- (id)description;
- (void)extrapolateSectionsBetween:(long long)arg1 and:(long long)arg2 withAnchorSection:(long long)arg3;
- (id)geometryDescriptorForSectionAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)init;
- (id)initWithLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (id)sections;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (long long)skimmingDataSourceIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (long long)zoomLevel;

@end
