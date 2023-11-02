
@protocol ANMessengerDelegate <NSObject>

@required

- (void)failedToDeliverAnnouncement:(ANAnnouncement *)arg1 error:(NSError *)arg2;
- (void)receivedAnnouncement:(ANAnnouncement *)arg1;

@end
