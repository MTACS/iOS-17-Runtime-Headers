
@protocol URTAlertServerToClientInterface <NSObject>

@required

- (oneway void)handleCancelAction;
- (oneway void)handleDefaultAction;
- (oneway void)handleOtherAction;

@end
