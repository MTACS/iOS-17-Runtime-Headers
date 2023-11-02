
@interface SBPIPInteractionControllerVisualizationView : UIView {
    UIView * _containerView;
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
    }  _extendedGeometryContext;
    UIView * _extendedGeometryView;
    UIView * _fakePIPView;
    UIView * _insetsGeometryView;
    struct SBPIPPositionInteractionStateContext { 
        bool isStashed; 
        bool isInteractive; 
        bool hasActiveGesture; 
        bool isFreelyPositionable; 
        struct CGPoint { 
            double x; 
            double y; 
        } projectedPosition; 
        struct CGPoint { 
            double x; 
            double y; 
        } initialPosition; 
        struct CGPoint { 
            double x; 
            double y; 
        } currentPosition; 
        double currentPositionStashProgress; 
        double projectedPositionStashProgress; 
    }  _interactionContext;
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
    }  _mainGeometryContext;
    UIView * _mainGeometryView;
    _UIHyperregionUnion * _regionUnion;
    NSMutableArray * _regionViews;
    UIView * _unionView;
}

@property (nonatomic) struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; } extendedGeometryContext;
@property (nonatomic) struct SBPIPPositionInteractionStateContext { bool x1; bool x2; bool x3; bool x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; } interactionContext;
@property (nonatomic) struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; } mainGeometryContext;
@property (nonatomic, retain) _UIHyperregionUnion *regionUnion;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unionFrame;
- (struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })extendedGeometryContext;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct SBPIPPositionInteractionStateContext { bool x1; bool x2; bool x3; bool x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; })interactionContext;
- (void)layoutSubviews;
- (struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })mainGeometryContext;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)regionUnion;
- (void)setExtendedGeometryContext:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (void)setInteractionContext:(struct SBPIPPositionInteractionStateContext { bool x1; bool x2; bool x3; bool x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; struct CGPoint { double x_7_1_1; double x_7_1_2; } x7; double x8; double x9; })arg1;
- (void)setMainGeometryContext:(struct SBPIPPositionGeometryContext { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct UIEdgeInsets { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; struct UIEdgeInsets { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; unsigned long long x9; long long x10; })arg1;
- (void)setRegionUnion:(id)arg1;

@end
