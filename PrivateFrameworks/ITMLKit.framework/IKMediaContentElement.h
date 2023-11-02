
@interface IKMediaContentElement : IKViewElement {
    IKAppPlayerBridge * _playerBridge;
}

@property (nonatomic, readonly) IKAppPlayerBridge *playerBridge;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)playerBridge;

@end
