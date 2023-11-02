
@protocol _INPBDeleteEventIntentResponse <NSObject>

@required

- (int)StringAsConfirmationReason:(NSString *)arg1;
- (int)confirmationReason;
- (NSString *)confirmationReasonAsString:(int)arg1;
- (bool)hasConfirmationReason;
- (void)setConfirmationReason:(int)arg1;
- (void)setHasConfirmationReason:(bool)arg1;

@end
