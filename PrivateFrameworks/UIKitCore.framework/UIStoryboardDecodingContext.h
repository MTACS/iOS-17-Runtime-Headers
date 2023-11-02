
@interface UIStoryboardDecodingContext : NSObject {
    long long  _childViewControllerIndex;
    UIClassSwapper * _classSwapperTemplate;
    id /* block */  _creator;
    UIViewController * _parentViewController;
    id  _sender;
    UIStoryboardSegueTemplate * _sourceSegueTemplate;
}

@property (nonatomic) long long childViewControllerIndex;
@property (nonatomic, retain) UIClassSwapper *classSwapperTemplate;
@property (nonatomic, copy) id /* block */ creator;
@property (nonatomic, retain) UIViewController *parentViewController;
@property (nonatomic, retain) id sender;
@property (nonatomic, retain) UIStoryboardSegueTemplate *sourceSegueTemplate;

- (void).cxx_destruct;
- (long long)childViewControllerIndex;
- (id)classSwapperTemplate;
- (id /* block */)creator;
- (id)parentViewController;
- (id)sender;
- (void)setChildViewControllerIndex:(long long)arg1;
- (void)setClassSwapperTemplate:(id)arg1;
- (void)setCreator:(id /* block */)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSourceSegueTemplate:(id)arg1;
- (id)sourceSegueTemplate;

@end
