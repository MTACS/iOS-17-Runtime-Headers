
@protocol HMDUserCloudShareControllerDelegate <NSObject>

@required

- (NSDate *)currentDateForUserCloudShareController:(HMDUserCloudShareController *)arg1;
- (void)userCloudShareController:(HMDUserCloudShareController *)arg1 sendRepairInfo:(HMUserCloudShareRepairInfo *)arg2 toConnection:(HMDXPCClientConnection *)arg3 home:(HMDHome *)arg4 containerID:(NSString *)arg5;
- (void)userCloudShareController:(void *)arg1 sendShareRequestMessageWithConnection:(void *)arg2 fromUser:(void *)arg3 toUser:(void *)arg4 home:(void *)arg5 shareURL:(void *)arg6 shareToken:(void *)arg7 containerID:(void *)arg8 completion:(void *)arg9; // needs 9 arg types, found 15: HMDUserCloudShareController *, HMDXPCClientConnection *, HMDUser *, HMDUser *, HMDHome *, NSData *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (HMFTimer *)userCloudShareController:(HMDUserCloudShareController *)arg1 timerWithInterval:(double)arg2;
- (void)userCloudShareController:(HMDUserCloudShareController *)arg1 wakeClientForRepairWithContainerID:(NSString *)arg2;
- (void)userCloudShareController:(HMDUserCloudShareController *)arg1 wakeClientWithContainerID:(NSString *)arg2;

@end
