
@interface _UIImageContentLayoutDrawingTarget : NSObject <_UIImageContentEffect, _UIImageContentLayoutTarget> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _preferredContentScaleFactor;
}

@property (nonatomic, readonly) bool _hasContentGravity;
@property (nonatomic, readonly) bool _layoutShouldFlipHorizontalOrientations;
@property (nonatomic, readonly) bool _supportsContents;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredContentScaleFactor;
@property (nonatomic, readonly) long long semanticContentAttribute;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

- (id)_effectForRenderingSource:(id)arg1;
- (long long)_effectiveRenderingModeForSource:(id)arg1 symbolConfiguration:(id)arg2;
- (bool)_hasContentGravity;
- (bool)_layoutShouldFlipHorizontalOrientations;
- (id)_renditionForSource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 symbolConfiguration:(id)arg3 withRenditionResult:(id)arg4 lazy:(bool)arg5;
- (bool)_supportsContents;
- (id)_symbolConfigurationForSource:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (long long)contentMode;
- (double)preferredContentScaleFactor;
- (long long)semanticContentAttribute;
- (id)traitCollection;

@end
