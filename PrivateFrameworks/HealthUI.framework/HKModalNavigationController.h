
@interface HKModalNavigationController : HKNavigationController {
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)dismissWithAnimation:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;

@end
