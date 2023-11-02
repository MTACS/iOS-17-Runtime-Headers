
@interface _MKCalloutLayer : _MKResizingLayer {
    double  _arrowOffset;
    long long  _arrowPosition;
    struct CGImage { } * _contentImage;
    UIColor * _fillColor;
    CALayer * _leftLayer;
    struct { 
        double margin; 
        double cornerRadius; 
        double arrowBase; 
        double arrowHeight; 
        bool useRadialSmoothing; 
        union { 
            struct { 
                double arrowBaseRadius; 
                double arrowRadius; 
            } radialSmoothing; 
            struct { 
                double arrowSmoothing; 
                double arrowPointFactor; 
            } nonRadialSmoothing; 
        } ; 
        bool alignDetailViewBaseline; 
        bool scaleVerticalPaddingForDynamicType; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } padding; 
    }  _metrics;
    CALayer * _rightLayer;
    UIColor * _strokeColor;
}

@property (nonatomic) double arrowOffset;
@property (nonatomic) long long arrowPosition;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; bool x5; union { struct { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; bool x7; bool x8; struct UIEdgeInsets { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; } x9; } metrics;
@property (nonatomic, retain) UIColor *strokeColor;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentSize;
- (struct CGImage { }*)_newContentImage;
- (double)arrowOffset;
- (long long)arrowPosition;
- (void)dealloc;
- (id)fillColor;
- (id)init;
- (void)layoutSublayers;
- (struct { double x1; double x2; double x3; double x4; bool x5; union { struct { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; bool x7; bool x8; struct UIEdgeInsets { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; } x9; })metrics;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowPosition:(long long)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setMetrics:(struct { double x1; double x2; double x3; double x4; bool x5; union { struct { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; bool x7; bool x8; struct UIEdgeInsets { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; } x9; })arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end
