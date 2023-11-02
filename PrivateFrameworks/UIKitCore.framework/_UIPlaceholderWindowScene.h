
@interface _UIPlaceholderWindowScene : _UIScreenBasedWindowScene <_UIContextBinderContextCreationPolicyHolding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)alwaysKeepContexts;
+ (bool)autoInvalidates;
+ (bool)shouldAllowComponents;

- (bool)_permitContextCreationForBindingDescription:(struct { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; })arg1;

@end
