
@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation {
    id /* block */  _configuratorBlock;
    <AVOutputDeviceConfigurationRetrieval> * _finalConfiguration;
    struct OpaqueFigRoutingContext { } * _routingContext;
}

@property (nonatomic, retain) <AVOutputDeviceConfigurationRetrieval> *finalConfiguration;

+ (void)initialize;

- (void)dealloc;
- (id)finalConfiguration;
- (id)init;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { }*)arg1 configuratorBlock:(id /* block */)arg2;
- (bool)isAsynchronous;
- (void)setFinalConfiguration:(id)arg1;
- (void)start;

@end
