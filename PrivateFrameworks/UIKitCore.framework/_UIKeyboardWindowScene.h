
@interface _UIKeyboardWindowScene : _UIScreenBasedWindowScene

+ (bool)alwaysKeepContexts;
+ (bool)autoInvalidates;
+ (bool)shouldAllowComponents;

- (bool)_affectsScreenOrientation;
- (id)_fixupInheritedSettings:(id)arg1;
- (id)initWithScreen:(id)arg1 session:(id)arg2 lookupKey:(id)arg3;

@end
