
@protocol UIPredictiveViewController <NSObject>

@required

- (bool)isVisibleForInputDelegate:(id <UIKeyInput>)arg1 inputViews:(UIInputViewSet *)arg2;
- (double)preferredHeightForTraitCollection:(UITraitCollection *)arg1;

@optional

- (bool)allowsCompactAssistantBar;
- (NSArray *)displayedCandidates;
- (bool)hidesExpandableButton;
- (double)preferredWidthForTraitCollection:(UITraitCollection *)arg1;
- (bool)requiresKeyboard;
- (void)setAssistantBarStyle:(long long)arg1;

@end
