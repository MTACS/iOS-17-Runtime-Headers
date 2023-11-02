
@interface UIStoryboardUnwindSegueSource : NSObject {
    NSMutableArray * _searchChain;
    id  _sender;
    UIViewController * _sourceViewController;
    SEL  _unwindAction;
}

@property (readonly) id sender;
@property (readonly) UIViewController *sourceViewController;
@property (readonly) SEL unwindAction;

- (void).cxx_destruct;
- (id)_childContainingUnwindSourceForViewController:(id)arg1;
- (id)_findDestination;
- (id)_initWithSourceViewController:(id)arg1 action:(SEL)arg2 sender:(id)arg3;
- (id)init;
- (id)sender;
- (id)sourceViewController;
- (SEL)unwindAction;

@end
