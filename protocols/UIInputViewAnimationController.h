
@protocol UIInputViewAnimationController <NSObject>

@required

- (void)completeAnimationWithHost:(id <UIInputViewAnimationHost>)arg1 context:(id <NSObject>)arg2;
- (void)performAnimationWithHost:(id <UIInputViewAnimationHost>)arg1 context:(id <NSObject>)arg2;
- (<NSObject> *)prepareAnimationWithHost:(id <UIInputViewAnimationHost>)arg1 startPlacement:(UIInputViewSetPlacement *)arg2 endPlacement:(UIInputViewSetPlacement *)arg3;

@end
