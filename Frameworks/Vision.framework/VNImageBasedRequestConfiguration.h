
@interface VNImageBasedRequestConfiguration : VNRequestConfiguration {
    NSArray * _inputDetectedObjectObservations;
    NSArray * _inputFaceObservations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
}

@property (nonatomic, copy) NSArray *inputDetectedObjectObservations;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (id)inputDetectedObjectObservations;
- (id)inputFaceObservations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (void)setInputDetectedObjectObservations:(id)arg1;
- (void)setInputFaceObservations:(id)arg1;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
