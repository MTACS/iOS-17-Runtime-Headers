
@interface AFUIAdapter : NSObject

+ (void)addTemporaryTextColorToTextField:(id)arg1;
+ (long long)alignmentFromTextField:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })areaForASPFromTextField:(id)arg1;
+ (void)configureField:(id)arg1 withASPForegroundView:(id)arg2 withASPBackgroundView:(id)arg3;
+ (void)enumerateSignUpSignalsFromButton:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateSignUpSignalsFromNavBarItem:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateSignUpSignalsFromViewController:(id)arg1 block:(id /* block */)arg2;
+ (void)enumerateSignUpSignalsFromViewControllerForResponder:(id)arg1 block:(id /* block */)arg2 viewControllerOut:(id*)arg3;
+ (void)enumerateSignupSignalsFromAccessibility:(id)arg1 block:(id /* block */)arg2;
+ (id)firstResponderForInput;
+ (id)gatherRespondersFromResponder:(id)arg1;
+ (id)placeholderTextForResponder:(id)arg1;
+ (id)presentedRootViewControllerForResponder:(id)arg1;
+ (void)removeTemporaryTextColorFromTextField:(id)arg1;
+ (bool)responderAcceptsText:(id)arg1;
+ (Class)runtimeClass;
+ (void)setText:(id)arg1 forResponder:(id)arg2;
+ (id)textFromResponder:(id)arg1;
+ (id)textInputRespondersFromResponders:(id)arg1 currentResponder:(id)arg2 indexOfCurrent:(unsigned long long*)arg3;
+ (id)textSignalsForResponder:(id)arg1;

@end
