
@protocol CKVDonateTaskProvider <NSObject>

@required

- (CKVDonateTask *)derivativeTaskForId:(unsigned short)arg1 usingSettings:(CKVSettings *)arg2 modifiedItemIds:(NSSet *)arg3 deletedItemIds:(NSSet *)arg4;
- (void)enableSimulatedTasks:(bool)arg1;
- (CKVDonateTask *)taskForId:(unsigned short)arg1 usingSettings:(CKVSettings *)arg2;
- (CKVDonateTask *)verificationTaskForId:(unsigned short)arg1;

@end
