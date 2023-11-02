
@interface HMITorsoClassifier : HMFObject <HMFLogging> {
    double  _classificationThresholdKnown;
    HMITorsoprinter * _torsoprinter;
}

@property (readonly) double classificationThresholdKnown;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) HMITorsoprinter *torsoprinter;

+ (id)logCategory;

- (void).cxx_destruct;
- (double)classificationThresholdKnown;
- (id)classifyTorsoEvent:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pixelBuffer:(struct __CVBuffer { }*)arg3 homeUUID:(id)arg4 error:(id*)arg5;
- (id)init;
- (id)torsoprinter;

@end
