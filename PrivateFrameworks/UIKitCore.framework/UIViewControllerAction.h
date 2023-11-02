
@interface UIViewControllerAction : NSObject {
    id /* block */  _completion;
    double  _curlUpRevealedHeight;
    NSString * _name;
    int  _transition;
    UIViewController * _viewController;
}

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;

@end
