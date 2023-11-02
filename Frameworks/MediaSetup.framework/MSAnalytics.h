
@interface MSAnalytics : NSObject

+ (void)sendConfigEvent:(id)arg1;
+ (void)sendDefaultServiceChangedEvent:(id)arg1;
+ (void)sendPlayIntent:(bool)arg1;
+ (void)sendPrimaryUserUpdatedOn:(id)arg1;
+ (void)sendRemovalEvent:(id)arg1;
+ (void)sendServiceEvent:(id)arg1;
+ (void)sendServiceRequestLapseEvent:(id)arg1;
+ (void)sendSetupEvent:(id)arg1;
+ (void)sendUserRegisteredNumberOfServices:(int)arg1;

@end
