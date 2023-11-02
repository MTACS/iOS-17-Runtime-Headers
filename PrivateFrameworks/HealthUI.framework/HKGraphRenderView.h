
@interface HKGraphRenderView : UIView <HKGraphRenderer> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _axisRect;
    <HKGraphRenderDelegate> * renderDelegate;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } axisRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HKGraphRenderDelegate> *renderDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axisRect;
- (struct CGSize { double x1; double x2; })drawAttributedText:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 exclusion:(id)arg5;
- (void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(bool)arg5 blendMode:(int)arg6 clipToAxes:(bool)arg7;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })drawText:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 spaceAvailable:(id)arg3 horizontalAlignment:(long long)arg4 verticalAlignment:(long long)arg5 hyphenationFactor:(id)arg6 textColor:(id)arg7 font:(id)arg8 clipToAxis:(bool)arg9 exclusion:(id)arg10;
- (void)fillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFillStyle:(id)arg2 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alpha:(double)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)renderDelegate;
- (void)setAxisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsRender;
- (void)setRenderDelegate:(id)arg1;

@end
