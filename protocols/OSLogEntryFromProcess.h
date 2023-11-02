
@protocol OSLogEntryFromProcess

@required

- (unsigned long long)activityIdentifier;
- (NSString *)process;
- (int)processIdentifier;
- (NSString *)sender;
- (unsigned long long)threadIdentifier;

@end
