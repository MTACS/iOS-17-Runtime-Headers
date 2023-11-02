
@protocol IAMMessageGroupInternalDelegate <NSObject>

@required

- (void)messageGroup:(IAMMessageGroup *)arg1 didReportModalMessagePresentationFailedWithIdentifier:(NSString *)arg2;
- (void)messageGroup:(IAMMessageGroup *)arg1 didReportModalMessageWasDismissedWithIdentifier:(NSString *)arg2;
- (void)messageGroup:(IAMMessageGroup *)arg1 didReportModalMessageWasPresentedWithIdentifier:(NSString *)arg2;
- (void)messageGroup:(IAMMessageGroup *)arg1 didReportModalMessageWithIdentifier:(NSString *)arg2 actionWasPerformedWithIdentifier:(NSString *)arg3;

@end
