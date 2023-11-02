
@interface BWInferenceVisionFaceObservationsCropDescriptor : NSObject <BWInferenceCropDescriptor> {
    unsigned long long  _faceIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BOOL identifier;
@property (readonly) Class superclass;

- (bool)applicableToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forMediaKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)identifier;
- (id)initWithFaceIndex:(unsigned long long)arg1;
- (struct { int x1; int x2; })maxCropForDimensions:(struct { int x1; int x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
