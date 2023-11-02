
@interface BWMatteMediaSuppressionNode : BWNode {
    unsigned int  _behavior;
}

+ (void)initialize;

- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithBehavior:(unsigned int)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
