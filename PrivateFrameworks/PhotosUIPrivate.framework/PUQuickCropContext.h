
@interface PUQuickCropContext : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _aspectRatio;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRectRelativeToRenderedImage;
    bool  _lockAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderedImageSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _selectedAspectRatio;
}

@property (nonatomic) struct CGSize { double x1; double x2; } aspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRectRelativeToRenderedImage;
@property (nonatomic) bool lockAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } renderedImageSize;
@property (nonatomic) struct CGSize { double x1; double x2; } selectedAspectRatio;

- (struct CGImage { }*)_croppedCGImageForTransition:(struct CGImage { }*)arg1;
- (id)_croppedSnapshotViewForTransition:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizedCropRectForTransition;
- (void)applyCropRectToCompositionController:(id)arg1;
- (id)applyCropToAssetTransitionInfo:(id)arg1;
- (struct CGSize { double x1; double x2; })aspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectRelativeToRenderedImage;
- (id)initWithTileTransform:(id)arg1 renderedImageSize:(struct CGSize { double x1; double x2; })arg2 boundingSize:(struct CGSize { double x1; double x2; })arg3 selectedAspectRatio:(struct CGSize { double x1; double x2; })arg4;
- (bool)lockAspectRatio;
- (struct CGSize { double x1; double x2; })renderedImageSize;
- (struct CGSize { double x1; double x2; })selectedAspectRatio;
- (void)setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setCropRectRelativeToRenderedImage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLockAspectRatio:(bool)arg1;
- (void)setRenderedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelectedAspectRatio:(struct CGSize { double x1; double x2; })arg1;

@end
