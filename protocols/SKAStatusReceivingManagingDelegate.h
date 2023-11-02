
@protocol SKAStatusReceivingManagingDelegate <NSObject>

@required

- (void)statusReceivingManager:(id <SKAStatusReceivingManaging>)arg1 didReceiveStatusUpdate:(SKADatabaseStatus *)arg2 onChannel:(SKADatabaseChannel *)arg3;

@end
