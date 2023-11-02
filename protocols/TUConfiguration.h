
@protocol TUConfiguration <NSObject>

@required

- (unsigned long long)announceCalls;
- (NSURL *)conversationLinkBaseURL;
- (NSString *)conversationLinkBaseURLString;
- (bool)simulateFatalPersistentStoreError;
- (bool)simulateInternationalCall;

@end
