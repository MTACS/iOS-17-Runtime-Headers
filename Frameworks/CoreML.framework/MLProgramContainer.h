
@interface MLProgramContainer : MLNeuralNetworkContainer

+ (id)containerFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram {} *x_1_1_1; } x1; })loadProgramAtURL:(id)arg1 error:(id*)arg2;
+ (struct shared_ptr<MIL::IRProgram> { struct IRProgram {} *x1; struct __shared_weak_count {} *x2; })loadProgramFromCompiledArchive:(void*)arg1 error:(id*)arg2;
+ (bool)populateInputNameToShapeMap:(void*)arg1 fromContainer:(id)arg2 forFunction:(const void*)arg3 program:(const void*)arg4 withValidation:(bool)arg5 error:(id*)arg6;
+ (void)updateOptionalDefaultValueParametersInContainer:(id)arg1 usingProgram:(const void*)arg2;

@end
