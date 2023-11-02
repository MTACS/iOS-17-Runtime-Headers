
@interface TCMPSGraphModuleBatch : NSObject {
    <MTLCommandBuffer> * _commandBuffer;
    NSArray * _grad;
    NSArray * _input;
    NSArray * _lossState;
    NSArray * _output;
}

@property (nonatomic, readonly) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic, retain) NSArray *grad;
@property (nonatomic, retain) NSArray *input;
@property (nonatomic, retain) NSArray *lossState;
@property (nonatomic, retain) NSArray *output;

- (void).cxx_destruct;
- (id)commandBuffer;
- (id)grad;
- (id)initWithCommandBuffer:(id)arg1;
- (id)input;
- (id)lossState;
- (id)output;
- (void)setGrad:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setLossState:(id)arg1;
- (void)setOutput:(id)arg1;

@end
