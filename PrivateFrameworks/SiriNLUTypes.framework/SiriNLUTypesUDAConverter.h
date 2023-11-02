
@interface SiriNLUTypesUDAConverter : NSObject

+ (id)convertDelegatedUserDialogAct:(id)arg1;
+ (id)convertReferenceContext:(id)arg1;
+ (id)convertRewriteMessage:(id)arg1;
+ (id)convertRewriteMessages:(id)arg1;
+ (id)convertUserAccepted:(id)arg1;
+ (id)convertUserAcknowledged:(id)arg1;
+ (id)convertUserCancelled:(id)arg1;
+ (id)convertUserDialogAct:(id)arg1;
+ (id)convertUserDialogActs:(id)arg1;
+ (id)convertUserRejected:(id)arg1;
+ (id)convertUserStatedTask:(id)arg1;
+ (id)convertUserWantedToPause:(id)arg1;
+ (id)convertUserWantedToProceed:(id)arg1;
+ (id)convertUserWantedToRepeat:(id)arg1;
+ (void)convertUtteranceAlignment:(id)arg1;

@end
