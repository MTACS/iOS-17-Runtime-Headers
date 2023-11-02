
@protocol UIKeyboardSplitControlMenuItem <NSObject>

@required

- (void)actionForMenu:(id <_UIInputSwitcherSplitMenu>)arg1;
- (NSString *)label;
- (bool)visible;

@end
