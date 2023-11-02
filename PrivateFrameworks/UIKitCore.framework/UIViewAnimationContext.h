
@interface UIViewAnimationContext : NSObject {
    long long  _animationCount;
    id /* block */  _completionHandler;
    UITableViewCell * _swipeToDeleteCell;
    NSArray * _viewAnimations;
}

- (void).cxx_destruct;

@end
