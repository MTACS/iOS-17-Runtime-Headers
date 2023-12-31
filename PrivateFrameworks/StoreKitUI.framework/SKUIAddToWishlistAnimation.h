
@interface SKUIAddToWishlistAnimation : NSObject {
    id /* block */  _completionBlock;
    UIImage * _image;
    UINavigationButton * _targetButton;
}

- (void).cxx_destruct;
- (void)animateWithCompletionBlock:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithImage:(id)arg1 buttonItem:(id)arg2 navigationBar:(id)arg3;

@end
