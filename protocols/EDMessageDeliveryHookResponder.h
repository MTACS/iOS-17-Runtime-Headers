
@protocol EDMessageDeliveryHookResponder <NSObject>

@required

- (void)deliveredMessage:(id <ECMessage>)arg1 account:(id <ECMailAccount>)arg2;

@end
