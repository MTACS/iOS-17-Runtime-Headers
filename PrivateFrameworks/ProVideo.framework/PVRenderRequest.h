
@interface PVRenderRequest : NSObject {
    unsigned int  _childCode;
    int  _gcdPriority;
    int  _gpuPriority;
    bool  _highQuality;
    unsigned int  _outputCVPixelBufferFormat;
    NSArray * _outputNodes;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    unsigned int  _parentCode;
    int  _priority;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    id  _userContext;
}

@property (nonatomic) unsigned int childCode;
@property (nonatomic) int gcdPriority;
@property (nonatomic) int gpuPriority;
@property (nonatomic) bool highQuality;
@property (nonatomic) unsigned int outputCVPixelBufferFormat;
@property (nonatomic, readonly) NSArray *outputNodes;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic) int priority;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, retain) id userContext;

- (void).cxx_destruct;
- (unsigned int)childCode;
- (int)gcdPriority;
- (int)gpuPriority;
- (bool)highQuality;
- (id)initWithOutputs:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (unsigned int)outputCVPixelBufferFormat;
- (id)outputNodes;
- (struct CGSize { double x1; double x2; })outputSize;
- (unsigned int)parentCode;
- (int)priority;
- (void)setChildCode:(unsigned int)arg1;
- (void)setGcdPriority:(int)arg1;
- (void)setGpuPriority:(int)arg1;
- (void)setHighQuality:(bool)arg1;
- (void)setOutputCVPixelBufferFormat:(unsigned int)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setPriority:(int)arg1;
- (void)setUserContext:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)userContext;

@end
