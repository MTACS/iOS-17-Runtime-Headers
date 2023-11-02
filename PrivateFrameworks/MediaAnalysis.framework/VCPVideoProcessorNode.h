
@interface VCPVideoProcessorNode : NSObject {
    unsigned long long  _frameInterval;
    NSNumber * _frameLimit;
    id /* block */  _frameProcessor;
    unsigned long long  _processedFrameCount;
    VNRequest * _request;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeInterval;
}

@property (nonatomic, readonly) unsigned long long frameInterval;
@property (nonatomic, readonly) NSNumber *frameLimit;
@property (nonatomic, readonly) id /* block */ frameProcessor;
@property (nonatomic) unsigned long long processedFrameCount;
@property (nonatomic, readonly) VNRequest *request;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timeInterval;
@property (nonatomic, readonly) NSString *typeDescription;

+ (id)nodeWithFrameProcessor:(id /* block */)arg1 andConfiguration:(id)arg2;
+ (id)nodeWithRequest:(id)arg1 andConfiguration:(id)arg2;
+ (bool)validateConfiguration:(id)arg1 withError:(id*)arg2;

- (void).cxx_destruct;
- (void)_processConfiguration:(id)arg1;
- (bool)finished;
- (unsigned long long)frameInterval;
- (id)frameLimit;
- (id /* block */)frameProcessor;
- (id)initWithFrameProcessor:(id /* block */)arg1 andConfiguration:(id)arg2;
- (id)initWithRequest:(id)arg1 andConfiguration:(id)arg2;
- (unsigned long long)processedFrameCount;
- (id)request;
- (void)setProcessedFrameCount:(unsigned long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeInterval;
- (id)typeDescription;

@end
