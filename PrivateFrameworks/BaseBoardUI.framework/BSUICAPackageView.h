
@interface BSUICAPackageView : UIView <CAStateControllerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    id /* block */  _pendingCompletion;
    NSString * _pendingCompletionFromState;
    NSString * _pendingCompletionToState;
    NSDictionary * _publishedObjectMap;
    CALayer * _rootLayer;
    CAStateController * _stateController;
    NSObject<CAStateControllerDelegate> * _stateControllerDelegate;
}

@property (nonatomic, readonly, copy) NSArray *publishedObjectNames;
@property (nonatomic) NSObject<CAStateControllerDelegate> *stateControllerDelegate;

- (void).cxx_destruct;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)layoutSubviews;
- (id)publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;
- (bool)setState:(id)arg1;
- (bool)setState:(id)arg1 animated:(bool)arg2;
- (bool)setState:(id)arg1 animated:(bool)arg2 transitionSpeed:(double)arg3 completion:(id /* block */)arg4;
- (bool)setState:(id)arg1 onLayer:(id)arg2 animated:(bool)arg3 transitionSpeed:(double)arg4 completion:(id /* block */)arg5;
- (void)setStateControllerDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(bool)arg3;
- (id)stateControllerDelegate;

@end
