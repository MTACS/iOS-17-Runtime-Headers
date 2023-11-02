
@interface VCPFlowDecoder : VCPEspressoModel {
    NSArray * _inputBlobNames;
    NSString * _outpuBlobName;
}

- (void).cxx_destruct;
- (int)bindWithBuffers:(struct __CVBuffer { }*)arg1 correlation:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3 outputFlow:(struct __CVBuffer { }*)arg4;
- (int)estimateFlow:(struct __CVBuffer { }*)arg1 correlation:(struct __CVBuffer { }*)arg2 flow:(struct __CVBuffer { }*)arg3 outputFlow:(struct __CVBuffer { }*)arg4 callback:(id /* block */)arg5;
- (id)initModule:(int)arg1 config:(id)arg2 cancel:(id /* block */)arg3;

@end
