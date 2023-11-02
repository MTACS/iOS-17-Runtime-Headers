
@protocol IAMApplicationContextProvider <IAMContextProvider>

@optional

- (bool)allowsModalMessageDisplay;
- (double)lastMessageDisplayTime;
- (void)setLastMessageDisplayTime:(double)arg1;
- (UIViewController *)viewControllerForModalPresentation;

@end
