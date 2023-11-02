
@protocol _INPBPayloadConfirmation <NSObject>

@required

- (int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(NSString *)arg1;
- (int)StringAsReason:(NSString *)arg1;
- (int)StringAsSendAnnouncementIntentAnnouncementConfirmationReason:(NSString *)arg1;
- (int)StringAsStartCallIntentContactsConfirmationReason:(NSString *)arg1;
- (int)addTasksIntentTargetTaskListConfirmationReason;
- (NSString *)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)arg1;
- (_INPBSelectionItem *)confirmationItem;
- (bool)hasAddTasksIntentTargetTaskListConfirmationReason;
- (bool)hasConfirmationItem;
- (bool)hasReason;
- (bool)hasSendAnnouncementIntentAnnouncementConfirmationReason;
- (bool)hasStartCallIntentContactsConfirmationReason;
- (int)reason;
- (NSString *)reasonAsString:(int)arg1;
- (int)sendAnnouncementIntentAnnouncementConfirmationReason;
- (NSString *)sendAnnouncementIntentAnnouncementConfirmationReasonAsString:(int)arg1;
- (void)setAddTasksIntentTargetTaskListConfirmationReason:(int)arg1;
- (void)setConfirmationItem:(_INPBSelectionItem *)arg1;
- (void)setHasAddTasksIntentTargetTaskListConfirmationReason:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSendAnnouncementIntentAnnouncementConfirmationReason:(bool)arg1;
- (void)setHasStartCallIntentContactsConfirmationReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setSendAnnouncementIntentAnnouncementConfirmationReason:(int)arg1;
- (void)setStartCallIntentContactsConfirmationReason:(int)arg1;
- (int)startCallIntentContactsConfirmationReason;
- (NSString *)startCallIntentContactsConfirmationReasonAsString:(int)arg1;

@end
