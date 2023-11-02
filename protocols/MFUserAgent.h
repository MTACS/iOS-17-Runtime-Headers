
@protocol MFUserAgent <NSObject>

@required

- (void)autofetchAccount:(MailAccount *)arg1 mailboxUid:(MFMailboxUid *)arg2;
- (bool)canRegisterForAPSPush;
- (bool)canUseSpotlightIndex;
- (bool)isAllowedToAccessProtectedData;
- (bool)isForeground;
- (bool)isMaild;
- (bool)isMobileMail;
- (void)networkActivityEnded:(id)arg1;
- (void)networkActivityStarted:(id)arg1;

@optional

- (NSString *)sourceApplicationBundleIdentifier;

@end
