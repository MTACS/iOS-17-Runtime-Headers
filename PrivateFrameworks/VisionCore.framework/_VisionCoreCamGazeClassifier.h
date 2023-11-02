
@interface _VisionCoreCamGazeClassifier : NSObject <VisionCoreCamGazeClassifier> {
    VisionCoreTensorDescriptor * _gazeProbabilitiesOutputDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithGazeProbabilitiesOutputDescriptor:(id)arg1;
- (bool)getGazeClassification:(long long*)arg1 fromGazeProbabilitiesOutputData:(id)arg2 error:(id*)arg3;

@end
