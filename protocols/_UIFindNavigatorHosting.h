
@protocol _UIFindNavigatorHosting <NSObject>

@required

- (void)dismissFindNavigatorEndingActiveSession:(bool)arg1;
- (_UIFindNavigatorViewController *)findNavigatorViewController;
- (bool)isFindNavigatorVisible;
- (void)presentFindNavigatorWithFindSession:(UIFindSession *)arg1 showingReplace:(bool)arg2;

@end
