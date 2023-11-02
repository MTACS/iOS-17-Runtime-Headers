
@protocol _SFPBReminder <NSObject>

@required

- (_SFPBDate *)dueDate;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)notes;
- (void)setDueDate:(_SFPBDate *)arg1;
- (void)setNotes:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
