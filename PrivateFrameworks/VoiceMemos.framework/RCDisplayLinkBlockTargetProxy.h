
@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy {
    id /* block */  _handlerBlock;
}

@property (nonatomic, readonly, copy) id /* block */ handlerBlock;

- (void)dealloc;
- (void)displayLinkFired:(id)arg1;
- (id /* block */)handlerBlock;
- (id)initWithHandlerBlock:(id /* block */)arg1;

@end
