
@interface PKBannerPresentableConfiguration : NSObject {
    id /* block */  _didFinishHandler;
    id /* block */  _didStartHandler;
    id /* block */  _factory;
}

@property (nonatomic, copy) id /* block */ didFinishHandler;
@property (nonatomic, copy) id /* block */ didStartHandler;
@property (nonatomic, copy) id /* block */ factory;

- (void).cxx_destruct;
- (id /* block */)didFinishHandler;
- (id /* block */)didStartHandler;
- (id /* block */)factory;
- (void)setDidFinishHandler:(id /* block */)arg1;
- (void)setDidStartHandler:(id /* block */)arg1;
- (void)setFactory:(id /* block */)arg1;

@end
