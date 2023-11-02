
@interface _ExplorerDotLayer : CATransformLayer {
    CALayer * _connectivityDotBackingLayer;
    CALayer * _connectivityDotLayer;
    CALayer * _noServicePillLayer;
}

@property (nonatomic, readonly) CALayer *connectivityDotBackingLayer;
@property (nonatomic, readonly) CALayer *connectivityDotLayer;
@property (nonatomic, readonly) CALayer *noServicePillLayer;

- (void).cxx_destruct;
- (id)connectivityDotBackingLayer;
- (id)connectivityDotLayer;
- (id)init;
- (void)layoutSublayers;
- (id)noServicePillLayer;

@end
