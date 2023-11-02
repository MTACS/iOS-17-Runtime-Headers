
@protocol OSLogEntryWithPayload

@required

- (NSString *)category;
- (NSArray *)components;
- (NSString *)formatString;
- (NSString *)subsystem;

@end
