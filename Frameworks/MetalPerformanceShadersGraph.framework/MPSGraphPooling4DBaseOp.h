
@interface MPSGraphPooling4DBaseOp : MPSGraphOperation {
    MPSGraphPooling4DOpDescriptor * _desc;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 descriptor:(id)arg4 name:(id)arg5;

@end
