
@protocol WFDialogXPCHostProtocol <NSObject>

@required

- (void)beginConnection;
- (void)requestDismissalWithReason:(NSString *)arg1;

@end
