
@protocol SFReminder <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSDate *)dueDate;
- (NSData *)jsonData;
- (NSString *)notes;
- (void)setDueDate:(NSDate *)arg1;
- (void)setNotes:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
