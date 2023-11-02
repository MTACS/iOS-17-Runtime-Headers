
@protocol AFUIBridgeService <NSObject>

@required

- (oneway void)preheat;
- (oneway void)siriDismissed;
- (oneway void)siriPrompted;
- (oneway void)stopAttendingWithReason:(unsigned long long)arg1;

@optional

- (oneway void)siriWillPrompt;
- (oneway void)startAttending;

@end
