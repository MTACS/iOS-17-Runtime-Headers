
@interface SBLogWindowController : UIViewController {
    UITextView * _logTextView;
    SBWindow * _logWindow;
}

@property (nonatomic, retain) UITextView *logTextView;
@property (nonatomic, retain) SBWindow *logWindow;

+ (void)setWindowScene:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfAvailable;
+ (id)windowScene;

- (void).cxx_destruct;
- (void)_createAndUpdateWindowIfNecessary;
- (void)hide;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)logTextView;
- (id)logWindow;
- (void)setLogTextView:(id)arg1;
- (void)setLogWindow:(id)arg1;
- (void)show;

@end
