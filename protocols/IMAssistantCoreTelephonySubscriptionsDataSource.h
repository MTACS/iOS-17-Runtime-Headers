
@protocol IMAssistantCoreTelephonySubscriptionsDataSource <NSObject>

@required

- (TUSenderIdentity *)bestSenderIdentityForChatWithHandleIDs:(NSArray *)arg1;
- (bool)deviceHasMultipleSubscriptions;
- (NSString *)handleIDForSenderIdentity:(TUSenderIdentity *)arg1;
- (NSString *)simIDForSenderIdentity:(TUSenderIdentity *)arg1;

@end
