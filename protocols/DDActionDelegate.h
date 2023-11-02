
@protocol DDActionDelegate

@required

- (void)actionDidFinish:(DDAction *)arg1;
- (void)actionDidFinish:(DDAction *)arg1 shouldDismiss:(bool)arg2;

@end
