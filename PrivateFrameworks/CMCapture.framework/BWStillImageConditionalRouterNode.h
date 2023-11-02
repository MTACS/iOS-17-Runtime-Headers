
@interface BWStillImageConditionalRouterNode : BWFanOutNode {
    BWStillImageConditionalRouterConfiguration * _configuration;
}

+ (void)initialize;

- (void)dealloc;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithRoutingConfiguration:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
