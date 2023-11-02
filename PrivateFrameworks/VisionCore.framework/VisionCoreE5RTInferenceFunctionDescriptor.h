
@interface VisionCoreE5RTInferenceFunctionDescriptor : VisionCoreInferenceNetworkDescriptor {
    VisionCoreE5RTFunction * _function;
}

@property (nonatomic, readonly) VisionCoreE5RTFunction *function;

+ (id)descriptorForProgramLibraryName:(id)arg1 functionName:(id)arg2 inputImageName:(id)arg3 outputNames:(id)arg4 confidencesOutputName:(id)arg5 labelsFileName:(id)arg6 error:(id*)arg7;
+ (id)networkVersionForProgramLibrary:(id)arg1 function:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)function;

@end
