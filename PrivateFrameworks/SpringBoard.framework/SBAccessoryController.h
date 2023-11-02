
@interface SBAccessoryController : NSObject <SBWindowedAccessoryViewControllerDelegate> {
    SBWindow * _window;
    SBWindowedAccessoryViewController * _windowedAccessoryViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWindow *window;
@property (nonatomic, retain) SBWindowedAccessoryViewController *windowedAccessoryViewController;
@property (getter=isWindowedAccessoryWindowVisible, nonatomic, readonly) bool windowedAccessoryWindowVisiblevisible;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;

- (void).cxx_destruct;
- (void)_showWindowedAccessoryWindow:(bool)arg1 forWindowScene:(id)arg2;
- (bool)isWindowedAccessoryWindowVisible;
- (void)setWindowedAccessoryViewController:(id)arg1;
- (void)showWindowedAccessoryWindow:(bool)arg1 forWindowScene:(id)arg2;
- (id)window;
- (id)windowedAccessoryViewController;
- (void)windowedAccessoryViewControllerForceDetachButtonTapped:(id)arg1;

@end
