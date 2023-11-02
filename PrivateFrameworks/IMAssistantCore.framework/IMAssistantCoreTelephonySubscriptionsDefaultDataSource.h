
@interface IMAssistantCoreTelephonySubscriptionsDefaultDataSource : NSObject <IMAssistantCoreTelephonySubscriptionsDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceHasMultipleSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)bestSenderIdentityForChatWithHandleIDs:(id)arg1;
- (bool)deviceHasMultipleSubscriptions;
- (id)handleIDForSenderIdentity:(id)arg1;
- (id)simIDForSenderIdentity:(id)arg1;
- (id)subscriptionContextForSenderIdentity:(id)arg1;

@end
