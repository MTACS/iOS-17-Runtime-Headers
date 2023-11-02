
@interface SGDPLogging : NSObject

+ (id)_boolMaskVectorForTokens:(id)arg1;
+ (void)_logReminderTitleSequence:(id)arg1 recorderKey:(id)arg2;
+ (void)_logReminderTitleUnknownTokens:(id)arg1 recorderKey:(id)arg2;
+ (id)_loggableTitleSequence:(id)arg1 withMask:(id)arg2;
+ (id)_loggableUnknownTokenSequence:(id)arg1 withMask:(id)arg2;
+ (id)_tokenizeTitle:(id)arg1;
+ (void)logActionVerb:(id)arg1 actionType:(unsigned short)arg2;
+ (void)logReminder:(id)arg1 actionType:(unsigned short)arg2;
+ (void)logReminderTitle:(id)arg1 actionType:(unsigned short)arg2;
+ (void)logUserCreatedReminderTitle:(id)arg1;

@end
