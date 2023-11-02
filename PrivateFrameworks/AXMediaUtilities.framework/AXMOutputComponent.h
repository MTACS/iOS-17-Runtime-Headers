
@interface AXMOutputComponent : NSObject {
    long long  _componentState;
}

@property (nonatomic) long long componentState;

+ (bool)isSupported;

- (bool)canHandleRequest:(id)arg1;
- (long long)componentState;
- (id)description;
- (void)handleRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setComponentState:(long long)arg1;
- (void)transitionToState:(long long)arg1 completion:(id /* block */)arg2;

@end
