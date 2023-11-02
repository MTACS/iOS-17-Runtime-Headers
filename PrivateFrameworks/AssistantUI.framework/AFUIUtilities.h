
@interface AFUIUtilities : NSObject

+ (void)animateUsingSpringWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)animateUsingSpringWithStiffness:(double)arg1 damping:(double)arg2 animations:(id /* block */)arg3;
+ (id)parsedUtteranceFromText:(id)arg1 context:(id)arg2;
+ (bool)shouldShowSiriXIndicator;

@end
