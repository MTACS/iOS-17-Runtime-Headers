
@interface _UIContextMenuGradientMaskingConfiguration : NSObject {
    bool  _backgroundMasksCorners;
    bool  _embedBackgroundForCompositing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _gradientMaskEdgeInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _gradientMaskLengths;
    id /* block */  _platterHairlineColorProvider;
    double  _spacerHeaderFooterHeight;
}

@property (nonatomic) bool backgroundMasksCorners;
@property (nonatomic) bool embedBackgroundForCompositing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } gradientMaskEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } gradientMaskLengths;
@property (nonatomic, copy) id /* block */ platterHairlineColorProvider;
@property (nonatomic) double spacerHeaderFooterHeight;

- (void).cxx_destruct;
- (bool)backgroundMasksCorners;
- (bool)embedBackgroundForCompositing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gradientMaskEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gradientMaskLengths;
- (id /* block */)platterHairlineColorProvider;
- (void)setBackgroundMasksCorners:(bool)arg1;
- (void)setEmbedBackgroundForCompositing:(bool)arg1;
- (void)setGradientMaskEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setGradientMaskLengths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlatterHairlineColorProvider:(id /* block */)arg1;
- (void)setSpacerHeaderFooterHeight:(double)arg1;
- (double)spacerHeaderFooterHeight;

@end
