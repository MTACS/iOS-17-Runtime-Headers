
@interface ICDocCamViewControllerMeshTransform : NSObject <CAAnimationDelegate> {
    UIImageView * _animationImageView;
    id /* block */  _imageMeshAnimationCompletionBlock;
    ICDocCamImageQuad * _imageQuad;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageViewFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previewViewFrame;
    UIView * _scrimView;
}

@property (nonatomic, retain) UIImageView *animationImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ imageMeshAnimationCompletionBlock;
@property (nonatomic, retain) ICDocCamImageQuad *imageQuad;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewViewFrame;
@property (nonatomic, retain) UIView *scrimView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)animationImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForImageInImageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)hide;
- (id /* block */)imageMeshAnimationCompletionBlock;
- (id)imageMeshTransformWithImageQuad:(id)arg1 imageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 previewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 finalTransform:(bool)arg4;
- (id)imageQuad;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewFrame;
- (id)initWithImage:(id)arg1 backgroundImage:(id)arg2 imageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 view:(id)arg4 imageQuad:(id)arg5 previewView:(id)arg6 previewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 scrimView:(id)arg8;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewViewFrame;
- (id)scrimView;
- (void)setAnimationImageView:(id)arg1;
- (void)setImageMeshAnimationCompletionBlock:(id /* block */)arg1;
- (void)setImageQuad:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreviewViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrimView:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
