
@interface VIEspressoRunner : NSObject {
    void * _context;
    struct CGSize { 
        double width; 
        double height; 
    }  _expectedInputSize;
    NSString * _imageInputName;
    bool  _isImageRequired;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    NSMutableData * _outputBuffers;
    NSArray * _outputNames;
    void * _plan;
}

@property (nonatomic) bool isImageRequired;

+ (id)formatErrorMessage:(id)arg1 status:(int)arg2;
+ (void)logErrorMessage:(id)arg1 status:(int)arg2;

- (void).cxx_destruct;
- (id)classificationErrorWithDescription:(id)arg1;
- (void)dealloc;
- (id)initWithMLNetURL:(id)arg1 expectedInputSize:(struct CGSize { double x1; double x2; })arg2 imageInputName:(id)arg3 featureNames:(id)arg4 outputNames:(id)arg5 preferredMetalDevice:(id)arg6 usesCPUOnly:(bool)arg7;
- (bool)isImageRequired;
- (id)processWithError:(id*)arg1;
- (bool)setFeatures:(id)arg1 error:(id*)arg2;
- (bool)setFrame:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (void)setIsImageRequired:(bool)arg1;

@end
