
@interface VNDetectionprintInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    NSDictionary * _tensorKeyToPrintOutputName;
}

@property (nonatomic, readonly, copy) NSDictionary *tensorKeyToPrintOutputName;

+ (id)URLForEspressoModelNamed:(id)arg1 error:(id*)arg2;
+ (id)_descriptorForNetworkFileName:(id)arg1 networkSpecifier:(id)arg2 imageInputName:(id)arg3 tensorKeyToOutputNames:(id)arg4 error:(id*)arg5;
+ (id)sceneNetV3BasedNetworkAndReturnError:(id*)arg1;
+ (id)sceneNetV5BasedNetworkAndReturnError:(id*)arg1;

- (void).cxx_destruct;
- (id)tensorKeyToPrintOutputName;

@end
