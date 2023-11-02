
@interface UISpecializedInputMode : UIKeyboardInputMode {
    Class  _viewControllerClass;
}

@property (nonatomic, retain) Class viewControllerClass;

- (void).cxx_destruct;
- (void)clearViewControllerClass;
- (void)dealloc;
- (id)hardwareLayout;
- (bool)includeBarHeight;
- (bool)isSpecializedInputMode;
- (void)setViewControllerClass:(Class)arg1;
- (bool)showSWLayoutWithHWKeyboard;
- (Class)viewControllerClass;

@end
