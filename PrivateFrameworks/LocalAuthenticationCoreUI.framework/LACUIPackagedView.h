
@interface LACUIPackagedView : UIView {
    CALayer * _rootLayer;
    LACUIPackagedViewStateController * _stateController;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (void)layoutSubviews;
- (void)setState:(id)arg1 animated:(bool)arg2;
- (void)setState:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
