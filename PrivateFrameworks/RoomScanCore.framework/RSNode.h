
@interface RSNode : NSObject

@property (nonatomic, readonly, copy) NSArray *inputs;
@property (nonatomic, readonly, copy) NSArray *outputs;
@property (getter=isSinkNode, nonatomic, readonly) bool sinkNode;
@property (getter=isSourceNode, nonatomic, readonly) bool sourceNode;

- (void)_handleMessage:(id)arg1 fromInput:(id)arg2;
- (void)addInput:(id)arg1;
- (void)addOutput:(id)arg1;
- (id)init;
- (id)inputs;
- (bool)isSinkNode;
- (bool)isSourceNode;
- (id)outputs;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromInput:(id)arg2;

@end
