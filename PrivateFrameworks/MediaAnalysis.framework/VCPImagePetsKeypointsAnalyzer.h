
@interface VCPImagePetsKeypointsAnalyzer : VCPImageAnalyzer {
    int  _inputHeight;
    int  _inputWidth;
    int  _maxNumRegions;
    VCPCNNPetsDetectorV2 * _petsDetector;
    VCPCNNPetsKeypointsDetector * _petsKeypointsDetector;
    NSMutableArray * _results;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 petsDetections:(id)arg3 results:(id*)arg4 cancel:(id /* block */)arg5;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (id)initWithMaxNumRegions:(int)arg1 forceCPU:(bool)arg2 sharedModel:(bool)arg3;
- (int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned int*)arg3;

@end
