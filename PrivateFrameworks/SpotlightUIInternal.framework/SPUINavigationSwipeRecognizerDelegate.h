
@interface SPUINavigationSwipeRecognizerDelegate : NSObject <UIGestureRecognizerDelegate> {
    UINavigationController * _navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNavigationController:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;

@end
