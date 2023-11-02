
@protocol FBSDisplayLayoutPublisherObserving <NSObject>

@required

- (void)publisher:(FBSDisplayLayoutPublisher *)arg1 didUpdateLayout:(FBSDisplayLayout *)arg2 withTransition:(FBSDisplayLayoutTransitionContext *)arg3;

@end
