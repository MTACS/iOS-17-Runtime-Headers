
@interface MPSGraphCaptureContext : MPSGraphObject {
    NSMutableDictionary * _constantBuffers;
    void * _context;
    NSMutableArray * _data;
    bool  _doNotWriteJsonFile;
    NSMutableArray * _functions;
    NSString * _graphName;
    NSArray * _inputPorts;
    NSDictionary * _jsonData;
    NSMutableDictionary * _lastNodeWrittingToBuffer;
    NSMutableArray * _links;
    NSMutableArray * _nodes;
    NSString * _outputFolderPath;
    NSArray * _outputPorts;
    NSMutableDictionary * _pipelineFileNameDictionary;
    NSMutableDictionary * _pipelineFunctionNameDictionary;
    NSMutableDictionary * _pipelineReflectionDictionary;
    NSMutableArray * _portLinks;
}

- (void).cxx_destruct;
- (id)addFunctionWithBitCode:(id)arg1 metalFunctionName:(id)arg2 reflection:(id)arg3;
- (void)addPipeline:(id)arg1 functionName:(id)arg2 withReflection:(id)arg3;
- (id)constantBufferName:(id)arg1;
- (void)createNodeWithDispatchInfo:(id)arg1 encoderContext:(void*)arg2;
- (id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)functionNameForPipeline:(id)arg1;
- (id)initWithOutputFolderPath:(id)arg1 graphName:(id)arg2;
- (id)reflectionForPipeline:(id)arg1;
- (void)setConstantBuffer:(id)arg1;
- (void)setFeeds:(id)arg1 names:(id)arg2;
- (void)setInputBuffers:(id)arg1 names:(id)arg2;
- (void)setOutputBuffers:(id)arg1 names:(id)arg2;
- (void)setResults:(id)arg1 names:(id)arg2;
- (id)wrapComputeEncoder:(id)arg1;
- (void)writeToJsonFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)writejsonFile:(id)arg1;

@end
