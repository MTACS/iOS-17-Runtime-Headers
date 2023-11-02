
@interface BWDeferredProcessingSourceNode : BWSourceNode {
    NSObject<OS_dispatch_queue> * _emitSamplesDispatchQueue;
    NSMutableDictionary * _outputsByPortType;
    bool  _running;
}

@property (nonatomic, readonly) NSDictionary *outputsByPortType;

+ (void)initialize;

- (void)dealloc;
- (id)initWithPortTypes:(id)arg1 attributes:(id)arg2 colorSpaceProperties:(int)arg3;
- (id)nodeSubType;
- (id)outputForPortType:(id)arg1;
- (id)outputsByPortType;
- (id)portTypeForOutput:(id)arg1;
- (void)processBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;

@end
