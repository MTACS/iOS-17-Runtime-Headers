
@interface CKStaticImageStackView : UIView {
    PFMessagesStackLayoutFrameSolver * _frameSolver;
    NSArray * _imageLayers;
    NSArray * _mediaObjects;
    double  _stackCornerRadius;
}

@property (nonatomic, retain) PFMessagesStackLayoutFrameSolver *frameSolver;
@property (nonatomic, retain) NSArray *imageLayers;
@property (nonatomic, retain) NSArray *mediaObjects;
@property (nonatomic) double stackCornerRadius;

- (void).cxx_destruct;
- (Class)_PFMessageStackLayoutFrameSolverClass;
- (void)_mediaObjectPreviewDidChange:(id)arg1;
- (void)_updatePreviews;
- (id)frameSolver;
- (id)imageLayers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mediaObjects:(id)arg2;
- (void)layoutSubviews;
- (id)mediaObjects;
- (void)setFrameSolver:(id)arg1;
- (void)setImageLayers:(id)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setStackCornerRadius:(double)arg1;
- (double)stackCornerRadius;

@end
