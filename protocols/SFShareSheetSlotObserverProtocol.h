
@protocol SFShareSheetSlotObserverProtocol <SFShareSheetSlotManagerDelegate>

@required

- (void)didPerformInServiceActivityWithIdentifier:(NSUUID *)arg1 completed:(bool)arg2 items:(NSArray *)arg3 error:(NSError *)arg4;

@end
