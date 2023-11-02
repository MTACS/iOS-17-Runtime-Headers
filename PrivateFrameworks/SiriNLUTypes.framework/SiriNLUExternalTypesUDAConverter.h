
@interface SiriNLUExternalTypesUDAConverter : NSObject

+ (id)convertFromDelegatedUserDialogAct:(id)arg1;
+ (id)convertFromReferenceContext:(id)arg1;
+ (id)convertFromRewriteMessage:(id)arg1;
+ (id)convertFromRewriteMessages:(id)arg1;
+ (id)convertFromUserAccepted:(id)arg1;
+ (id)convertFromUserAcknowledged:(id)arg1;
+ (id)convertFromUserCancelled:(id)arg1;
+ (id)convertFromUserDialogAct:(id)arg1;
+ (id)convertFromUserDialogActs:(id)arg1;
+ (id)convertFromUserRejected:(id)arg1;
+ (id)convertFromUserStatedTask:(id)arg1;
+ (id)convertFromUserWantedToPause:(id)arg1;
+ (id)convertFromUserWantedToProceed:(id)arg1;
+ (id)convertFromUserWantedToRepeat:(id)arg1;

@end
