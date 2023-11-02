
@protocol _SFPBCreateReminderCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBReminder *)reminder;
- (void)setReminder:(_SFPBReminder *)arg1;

@end
