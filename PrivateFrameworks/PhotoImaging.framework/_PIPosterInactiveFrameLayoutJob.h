
@interface _PIPosterInactiveFrameLayoutJob : NURenderJob {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inactiveRect;
    PFPosterOrientedLayout * _layout;
    PFParallaxLayoutConfiguration * _layoutConfiguration;
    CIImage * _matteImage;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inactiveRect;
@property (nonatomic, retain) PFPosterOrientedLayout *layout;
@property (nonatomic, retain) PFParallaxLayoutConfiguration *layoutConfiguration;
@property (nonatomic, readonly) PIPosterInactiveFrameLayoutRequest *layoutInactiveFrameRequest;
@property (nonatomic, retain) CIImage *matteImage;

- (void).cxx_destruct;
- (bool)complete:(out id*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inactiveRect;
- (id)initWithInactiveFrameLayoutRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)layout;
- (id)layoutConfiguration;
- (id)layoutInactiveFrameRequest;
- (id)matteImage;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setInactiveRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutConfiguration:(id)arg1;
- (void)setMatteImage:(id)arg1;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsRenderStage;

@end
