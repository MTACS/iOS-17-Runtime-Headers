
@protocol _CDPDataPoint <NSObject>

@required

- (NSArray *)peopleIdentifiers;
- (NSDate *)timestamp;
- (NSString *)title;
- (bool)userIsSender;
- (bool)userIsThreadInitiator;

@end
