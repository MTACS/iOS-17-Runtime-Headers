
@interface PBUITreatImageRequest : NSObject <BSDescriptionProviding, CALayerDelegate, NSCopying, NSSecureCoding, PBUIRenderRequest> {
    PBUICodableImage * _codableImage;
    double  _downscaleFactor;
    NSString * _identifier;
    struct CGImage { } * _image;
    double  _scale;
    <PBUIImageTreatment> * _treatment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double downscaleFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic) double scale;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PBUIImageTreatment> *treatment;

+ (id)secureCodableTreatmentClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CIImage;
- (bool)configureState:(inout struct PBUIRenderState { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; id x3; id x4; }*)arg1 error:(out id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)downscaleFactor;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (struct CGImage { }*)image;
- (struct CGSize { double x1; double x2; })imagePixelSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 downscaleFactor:(double)arg2 treatment:(id)arg3;
- (id)initWithImage:(struct CGImage { }*)arg1 scale:(double)arg2 downscaleFactor:(double)arg3 treatment:(id)arg4;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGSize { double x1; double x2; })requestedOutputSizeInPixels;
- (struct CGSize { double x1; double x2; })requestedOutputSizeInPointsAtScale:(double)arg1;
- (double)scale;
- (void)setDownscaleFactor:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setScale:(double)arg1;
- (void)setTreatment:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)treatment;
- (id)treatmentOptions;
- (bool)usesCoreImageForTreatment:(id)arg1;

@end
