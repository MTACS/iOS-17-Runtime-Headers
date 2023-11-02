
@interface MPMiddlewareChain : NSObject {
    SEL  _builderSelector;
    NSArray * _builders;
    NSEnumerator * _middlewareEnumerator;
    Protocol * _protocol;
}

@property (nonatomic) SEL builderSelector;

+ (id)builderProxyForProtocol:(id)arg1;

- (void).cxx_destruct;
- (SEL)builderSelector;
- (void)forwardInvocation:(id)arg1;
- (id)initWithMiddleware:(id)arg1 protocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)nextObject;
- (void)setBuilderSelector:(SEL)arg1;

@end
