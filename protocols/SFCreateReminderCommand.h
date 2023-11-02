
@protocol SFCreateReminderCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFReminder *)reminder;
- (void)setReminder:(SFReminder *)arg1;

@end
