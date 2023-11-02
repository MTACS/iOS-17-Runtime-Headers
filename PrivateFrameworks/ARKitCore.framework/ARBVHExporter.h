
@interface ARBVHExporter : NSObject {
    long long  _exportType;
    NSString * _filePath;
    NSOutputStream * _framesStreamToFile;
    int  _numberFrames;
    bool  _running;
    void _scale;
    NSString * _tmpFilePath;
}

@property (nonatomic, readonly) bool running;

+ (id)headerByApplyingScale;
+ (id)liftedSkeletonHeaderByApplyingScale;
+ (id)stickFigureHeaderByApplyingScale;

- (void).cxx_destruct;
- (void)appendBodyAnchor:(id)arg1;
- (id)initWithFilePath:(void *)arg1 type:(void *)arg2 scale:(void *)arg3; // needs 3 arg types, found 2: id, long long
- (bool)running;
- (void)start;
- (void)stop;

@end
