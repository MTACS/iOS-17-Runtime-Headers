
@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {
    int  _maxNumRegions;
    VCPCNNPetsDetector * _petsDetector;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)convertResultsToDict:(id)arg1 results:(id)arg2;
- (id)initWithMaxNumRegions:(int)arg1;

@end
