
@protocol _UIRemoteKeyboardDistributedViewSource <NSObject>

@required

- (void)completeTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (void)setPlacement:(UIInputViewSetPlacement *)arg1 quietly:(bool)arg2 animated:(bool)arg3 generateSplitNotification:(bool)arg4;
- (void)startTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;
- (void)updateTransition:(NSString *)arg1 withInfo:(NSDictionary *)arg2;

@end
