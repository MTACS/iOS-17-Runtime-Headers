
@interface SBPIPPositionHyperregionLibrary : NSObject <SBPIPPositionHyperregionProviding> {
    bool  _isPad;
    _UIHyperregionUnion * _lastAllUnified;
    _UIHyperregionUnion * _lastContainerInsetRegion;
    _UIHyperregionUnion * _lastCornersRegion;
    struct SBPIPPositionGeometryContext { 
        struct CGSize { 
            double width; 
            double height; 
        } pipCurrentSize; 
        struct CGSize { 
            double width; 
            double height; 
        } pipLastSteadySize; 
        struct CGSize { 
            double width; 
            double height; 
        } pipStashedSize; 
        struct CGPoint { 
            double x; 
            double y; 
        } pipAnchorPointOffset; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } containerBounds; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } edgeInsets; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } minimumPadding; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } stashedMinimumPadding; 
        unsigned long long offscreenCorners; 
        long long orientation; 
    }  _lastGeometryContext;
    _UIHyperregionUnion * _lastOffscreenCorners;
    _UIHyperregionUnion * _lastStashedLeftRegion;
    _UIHyperregionUnion * _lastStashedRightRegion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allUnifiedRegionWithGeometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (id)_containerInsetRegionWithGeometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (id)_cornersRegionWithGeometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetRectForEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 pipSize:(struct CGSize { double x1; double x2; })arg2 containerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_lastKnownRegionForType:(long long)arg1;
- (id)_offscreenCornersRegionWithGeometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (void)_resetLastKnownRegions;
- (id)_stashedLeftRegionWithGeometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (id)_stashedRightRegionWithGeometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_validatedInsetRectWithinContainerBoundsWithGeometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_validatedMinimumPaddingAndEdgeInsetInsetRect:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_validatedStashedToStashedMaximumumRectWithGeometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (id)description;
- (id)init;
- (id)regionWithType:(long long)arg1 geometry:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg2;

@end
