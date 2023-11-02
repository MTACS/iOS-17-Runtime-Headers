
@interface MPSGraphExecutableDescriptor : MPSGraphObject {
    MPSGraphCompilationDescriptor * _compilationDescriptor;
    id /* block */  _variableFetchHandler;
}

@property (retain) MPSGraphCompilationDescriptor *compilationDescriptor;
@property unsigned long long compilerOptions;
@property (copy) id /* block */ variableFetchHandler;

- (void).cxx_destruct;
- (id)compilationDescriptor;
- (unsigned long long)compilerOptions;
- (id)init;
- (void)setCompilationDescriptor:(id)arg1;
- (void)setCompilerOptions:(unsigned long long)arg1;
- (void)setVariableFetchHandler:(id /* block */)arg1;
- (id /* block */)variableFetchHandler;

@end
