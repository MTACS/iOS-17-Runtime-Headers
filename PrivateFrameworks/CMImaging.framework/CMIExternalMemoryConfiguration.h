
@interface CMIExternalMemoryConfiguration : NSObject {
    bool  _cmiResourceEnabled;
    unsigned int  _inputPixelFormat;
    struct { 
        int width; 
        int height; 
    }  _maxInputDimensions;
    struct { 
        int width; 
        int height; 
    }  _maxOutputDimensions;
    NSDictionary * _processorSpecificOptions;
}

@property (nonatomic, readonly) bool cmiResourceEnabled;
@property (nonatomic, readonly) unsigned int inputPixelFormat;
@property (nonatomic, readonly) struct { int x1; int x2; } maxInputDimensions;
@property (nonatomic, readonly) struct { int x1; int x2; } maxOutputDimensions;
@property (nonatomic, readonly) NSDictionary *processorSpecificOptions;

- (void).cxx_destruct;
- (bool)cmiResourceEnabled;
- (id)description;
- (id)initWithMaxInputDimensions:(struct { int x1; int x2; })arg1 inputPixelFormat:(unsigned int)arg2 maxOutputDimensions:(struct { int x1; int x2; })arg3 cmiResourceEnabled:(bool)arg4 processorSpecificOptions:(id)arg5;
- (unsigned int)inputPixelFormat;
- (struct { int x1; int x2; })maxInputDimensions;
- (struct { int x1; int x2; })maxOutputDimensions;
- (id)processorSpecificOptions;

@end
