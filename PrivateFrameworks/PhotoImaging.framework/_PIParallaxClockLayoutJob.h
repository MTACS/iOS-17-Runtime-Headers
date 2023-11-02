
@interface _PIParallaxClockLayoutJob : NURenderJob {
    unsigned long long  _clockIntersection;
    NSString * _clockLayerOrder;
    PFPosterOrientedLayout * _layout;
    PFParallaxLayoutConfiguration * _layoutConfiguration;
    CIImage * _matteImage;
}

@property (nonatomic) unsigned long long clockIntersection;
@property (nonatomic, retain) NSString *clockLayerOrder;
@property (nonatomic, readonly) PIParallaxClockLayoutRequest *clockLayoutRequest;
@property (nonatomic, retain) PFPosterOrientedLayout *layout;
@property (nonatomic, retain) PFParallaxLayoutConfiguration *layoutConfiguration;
@property (nonatomic, retain) CIImage *matteImage;

- (void).cxx_destruct;
- (unsigned long long)clockIntersection;
- (id)clockLayerOrder;
- (id)clockLayoutRequest;
- (id)initWithParallaxClockLayoutRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)layout;
- (id)layoutConfiguration;
- (id)matteImage;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setClockIntersection:(unsigned long long)arg1;
- (void)setClockLayerOrder:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutConfiguration:(id)arg1;
- (void)setMatteImage:(id)arg1;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsRenderStage;

@end
