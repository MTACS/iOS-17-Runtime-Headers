
@interface PICompositionExportImagePrepareResult : NSObject {
    NUColorSpace * _inputColorSpace;
    bool  _inputIsHDR;
    struct { 
        long long width; 
        long long height; 
    }  _inputSize;
    NUImageExportRequest * _request;
}

@property (retain) NUColorSpace *inputColorSpace;
@property bool inputIsHDR;
@property struct { long long x1; long long x2; } inputSize;
@property (retain) NUImageExportRequest *request;

- (void).cxx_destruct;
- (id)inputColorSpace;
- (bool)inputIsHDR;
- (struct { long long x1; long long x2; })inputSize;
- (id)request;
- (void)setInputColorSpace:(id)arg1;
- (void)setInputIsHDR:(bool)arg1;
- (void)setInputSize:(struct { long long x1; long long x2; })arg1;
- (void)setRequest:(id)arg1;

@end
