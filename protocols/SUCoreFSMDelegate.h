
@protocol SUCoreFSMDelegate <NSObject>

@required

- (long long)performAction:(NSString *)arg1 onEvent:(NSString *)arg2 inState:(NSString *)arg3 withInfo:(id)arg4 nextState:(NSString *)arg5 error:(id*)arg6;

@end
